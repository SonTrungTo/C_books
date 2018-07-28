#include <stdio.h>
#define  TAB_SIZE     5


int main(void) {
  int    c, nb, pos;

  nb  = 0;          /* Number of blank spaces */
  pos = 1;          /* Position counter       */

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      nb = TAB_SIZE - (pos - 1) % TAB_SIZE;
      while (nb-- > 0) {
        putchar('#');
        ++pos;
      }
    } else if (c == '\n') {
      putchar(c);
      pos = 1;
    } else {
      putchar(c);
      ++pos;
    }
  }

  return 0;
}
