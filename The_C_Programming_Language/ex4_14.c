#include <stdio.h>

/* Macro swap interchanges x and y of type t */
#define swap(t, x, y) {t  z; \
                      z = x; \
                      x = y; \
                      y = z;}

int main(void) {
  int    x, y;

  x = 2;
  y = 3;
  swap(int, x, y);
  printf("%3i%3i\n", x, y);
  swap(int, x, y);
  printf("%3d%3d\n", x, y);

  return 0;
}
/* It's common sense not to use z as a variable for swap, since the block structure will hide it.*/
