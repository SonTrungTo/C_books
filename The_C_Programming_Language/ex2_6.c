#include <stdio.h>

/* setbits: set n bits of x that begins at p to the rightmost n bits of y */
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void) {
  unsigned x = 045, y = 013;

  printf("%u\n", setbits(x, 3, 3, y)); /* Expect: 39 */
  return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  return 0;
}
