/*  Integer overflow */
#include <stdio.h>

int main(void) {
  char c1 = 256, c2 = 257; /* Too big */

  printf("c1 = %d\nc2 = %d\n", c1, c2); /* cycle the number */

  return 0;
}
