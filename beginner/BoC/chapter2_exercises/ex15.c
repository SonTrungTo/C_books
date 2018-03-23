/*
*   Test my answer of exercise 15: x = (y = 2) + (z = 3)
*/
#include <stdio.h>

int main(void) {
  int   x, y, z;

  x = y = 2 + (z = 3);
  printf("%i %i %i\n", x, y, z);

  return 0;
}
