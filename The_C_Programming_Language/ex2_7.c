#include <stdio.h>

/* invert: return x with n bits that begin at position p inverted */
unsigned invert(unsigned x, int p, int n);

int main(void) {
  unsigned  x = 045, y = 055;

  printf("%u\n", invert(x, 3, 2)); /* 41 */
  printf("%u\n", invert(y, 3, 2)); /* 33 */
  return 0;
}

unsigned invert(unsigned x, int p, int n) {
  return x ^ (~(~0 << n) << (p+1-n));
}
