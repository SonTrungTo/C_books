# Tests for exercise 1-16

Exercise 1-16 asks you to revise the longest-line program's `main` so that it
prints the correct length of arbitrarily long lines, and as much of their text
as it can.

Run the tests from the book folder:

    bash tools/check.sh ch1/ex_1_16

`check.sh` feeds each `NAME.in` to the program's standard input and compares
its standard output with `NAME.expected`, byte for byte.

## What the program must print

The length of the longest line, a newline, then as much of that line as the
buffer holds. That is the output of:

    printf("%d\n%s", max, longest);

- **The length counts the line's `'\n'`**, the way `getline` does:
  `the longest one` plus its newline is 16.
- **On a tie, the first longest line wins.**
- **Empty input prints nothing.**
- **`MAXLINE` is 1000**, so the buffer keeps at most 999 characters. A line of
  2,500 characters prints `2501`, then its first 999 characters. Its `'\n'`
  didn't fit, so nothing follows them, not even a newline.

## The tests

| Test | Input | Expected output | What it checks |
|---|---|---|---|
| `01_basic` | `hello`, `the longest one`, `ok` | `16`, then `the longest one` | the basic job; the length includes `'\n'` |
| `02_tie_first_wins` | `abc`, `xyz` | `4`, then `abc` | a tie keeps the first line (`>`, not `>=`) |
| `03_empty_input` | nothing | nothing | no line means no output, not `0` |
| `04_blank_lines` | three empty lines | `1`, then an empty line | a blank line is still a line, of length 1 |
| `05_no_final_newline` | `hi`, then `longest!` with no `'\n'` | `8`, then `longest!` with no `'\n'` | the last line can end at end of file |
| `06_fits_exactly` | 998 `a`s and `'\n'` | `999`, then the whole line | the longest line that still fits, newline included |
| `07_one_past_buffer` | 999 `b`s and `'\n'` | `1000`, then 999 `b`s | one more character: the `'\n'` no longer fits |
| `08_long_line` | `short`, then 2,500 `x`s and `'\n'` | `2501`, then 999 `x`s | the exercise itself: counting past the buffer |
| `09_two_long_lines` | 1,500 `y`s, then 2,500 `z`s | `2501`, then 999 `z`s | comparing full lengths, not the 999 that fit |
| `10_long_line_no_newline` | `short`, then 1,200 `w`s, no `'\n'` | `1200`, then 999 `w`s | counting the rest of a long line up to end of file |

Each long line uses its own letter, so if the wrong line gets printed, the
diff shows which one.

## Changing these files

- Five `.expected` files end without a newline on purpose (05, 07, 08, 09 and
  10). Some editors add one when saving (vim does by default), which breaks
  the test. Create or change these files with `printf`, not an editor.
- The long inputs were made like this:

      printf '%2500s' '' | tr ' ' x     # 2,500 x's, no newline

- The expected outputs come from the rules above, not from running a program.
  Changing `MAXLINE` changes the expected output of tests 06 to 10.
