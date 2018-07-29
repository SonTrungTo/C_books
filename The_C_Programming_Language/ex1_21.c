#include <stdio.h>
#define   TAB_LENGTH     8

int main(void) {
  int    c, nb, pos, nt;

  nb = 0;
  nt = 0;
  for (pos = 1; (c = getchar()) != EOF; pos++) {
    if (c == ' ') {
      if (pos % TAB_LENGTH != 0)
        ++nb;
      else {
        ++nt;
        nb = 0;
      }
    }
    else {
      for (; nt > 0; nt--)
        putchar('\t');
      if (c == '\t')
        nb = 0;
      else
        for (; nb > 0; nb--)
          putchar(' ');
      putchar(c);
      if (c == '\n')
        pos = 0;
      else if (c == '\t')
        pos = pos + (TAB_LENGTH - (pos - 1) % TAB_LENGTH) - 1;
    }
  }

  return 0;
}
// Tab would be preferred since tab makes the output more succinct
