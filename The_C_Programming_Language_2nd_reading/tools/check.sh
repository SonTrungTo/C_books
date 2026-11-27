#!/usr/bin/env bash
# tools/check.sh: build and test K&R exercise folders.
#
#   bash tools/check.sh                every ch*/ex_*/ folder (what CI runs)
#   bash tools/check.sh ch1/ex_1_16    only the folders you name
#
# One folder = one exercise. Every .c file in it is compiled into one
# program; each tests/NAME.in is fed to stdin, and stdout must match
# tests/NAME.expected byte for byte. Optional tests/NAME.args = argv.
set -uo pipefail
shopt -s nullglob
cd "$(dirname "$0")/.." || exit 1        # paths are relative to the book

CC=${CC:-gcc}
CFLAGS=(-std=c23 -pedantic -Wall -Wextra -Werror -g -O1
        -fsanitize=address,undefined -fno-sanitize-recover=all
        -fno-omit-frame-pointer)

row() {                                  # one line of the job summary
  if [[ -n ${GITHUB_STEP_SUMMARY:-} ]]; then
    echo "| $1 | $2 |" >> "$GITHUB_STEP_SUMMARY"
  fi
}

check() {
  local dir=${1%/}
  local bin=$dir/${dir##*/}.out          # *.out is already git-ignored
  local srcs=("$dir"/*.c) tests=("$dir"/tests/*.in)
  local t base why rc out err pass=0 fail=0 args
  echo "== $dir"

  if [[ ! -d $dir ]]; then
    echo "   no such folder"; row "$dir" "❌ no such folder"; return 1
  fi
  if (( ${#srcs[@]} == 0 )); then
    echo "   no .c files (written answer)"; row "$dir" "📝 text only"
    return 0
  fi
  if ! "$CC" "${CFLAGS[@]}" -o "$bin" "${srcs[@]}"; then
    echo "   FAIL: does not compile (gcc's messages are above)"
    row "$dir" "❌ does not compile"; return 1
  fi
  if (( ${#tests[@]} == 0 )); then
    echo "   compiles; no tests yet"; row "$dir" "🟡 compiles, no tests"
    return 0
  fi

  out=$(mktemp) err=$(mktemp)
  for t in "${tests[@]}"; do
    base=${t%.in} args=()
    if [[ -f $base.args ]]; then read -ra args < "$base.args"; fi
    timeout 10 "$bin" "${args[@]}" < "$t" > "$out" 2> "$err"; rc=$?

    if   [[ ! -f $base.expected ]]; then why="no ${base##*/}.expected file"
    elif (( rc == 124 ));           then why="still running after 10 s"
    elif (( rc != 0 ));             then why="exit status $rc"
    elif ! cmp -s "$base.expected" "$out"; then why="output differs"
    else
      echo "   ok   ${base##*/}"; pass=$((pass + 1)); continue
    fi

    fail=$((fail + 1))
    echo "   FAIL ${base##*/}: $why"
    if (( rc != 0 )); then
      sed 's/^/        /' "$err"         # sanitizer or crash report
    elif [[ -f $base.expected ]]; then
      # cat -A shows tabs as ^I and line ends as $
      diff -u --label expected --label actual \
           <(cat -A "$base.expected") <(cat -A "$out")
    fi
  done
  rm -f "$out" "$err"

  if (( fail > 0 )); then
    row "$dir" "❌ $pass/$((pass + fail)) tests pass"; return 1
  fi
  row "$dir" "✅ $pass/$pass tests pass"
}

if (( $# == 0 )); then                   # sort -V: ex_1_2 before ex_1_10
  set -- $(printf '%s\n' ch*/ex_*/ | sort -V)
fi
row "Exercise" "Result"; row "---" "---"
status=0
for dir in "$@"; do check "$dir" || status=1; done
exit "$status"
