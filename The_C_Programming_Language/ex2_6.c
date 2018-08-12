#include <stdio.h>

/* setbits: set n bits of x that begins at p to the rightmost n bits of y */
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned setbits2(unsigned x, int p, int n, unsigned y);

int main(void) {
  unsigned x = 045, y = 013;
  unsigned a = 051, b = 015;

  printf("%u\n", setbits(x, 3, 3, y)); /* Expect: 39 */
  printf("%u\n", setbits(a, 3, 2, b)); /* Expect: 37 */
  printf("%u\n", setbits2(x, 3, 3, y));
  printf("%u\n", setbits2(a, 3, 2, b));
  return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  return ((((x >> (p+1-n)) & (~0 << n)) | (y & ~(~0 << n))) << (p+1-n) | (x & ~(~0 << (p+1-n))));
}

unsigned setbits2(unsigned x, int p, int n, unsigned y) {
  return  x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);
}
