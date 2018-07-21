#include <stdio.h>

int main(void) {
  double   nb, nt, nl;
  int      c;

  nb = nt = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;
  }

  printf("There are %.0f blank(s), %.0f tab(s) and %.0f newline(s).\n",
nb, nt, nl);
  return 0;
}
