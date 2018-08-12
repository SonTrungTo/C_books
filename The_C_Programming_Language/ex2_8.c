#include <stdio.h>

/* rightrot: returns the value of x rotated to the right by n bit positions */
unsigned rightrot(unsigned x, int n);
unsigned rightrot2(unsigned x, int n);
unsigned rightrot3(unsigned x, int n);
int      wordlength(void);            /* count the length of x */

int main(void) {
  unsigned  x = 045;

  printf("%u\n", rightrot(x, 1));
  printf("%u\n", rightrot(x, 2));
  printf("%u\n", rightrot(x, 3));
  printf("%u\n\n", rightrot(x, 5));

  printf("%u\n", rightrot2(x, 1));
  printf("%u\n", rightrot2(x, 2));
  printf("%u\n", rightrot2(x, 3));
  printf("%u\n\n", rightrot2(x, 5));

  printf("%u\n", rightrot3(x, 1));
  printf("%u\n", rightrot3(x, 2));
  printf("%u\n", rightrot3(x, 3));
  printf("%u\n\n", rightrot3(x, 5));
  return 0;
}

/* I can't see why I am wrong! */
unsigned rightrot(unsigned x, int n) {
  return  ((x >> n)|(x << (wordlength() - n)));
}

unsigned rightrot2(unsigned x, int n) {
  unsigned   rbit;

  while (n-- > 0) {
    rbit = (x & 1) << (wordlength() - 1);
    x = x >> 1;
    x = x | rbit;
  }

  return  x;
}

unsigned rightrot3(unsigned x, int n) {
  unsigned   rbit;

  if ((n = n % wordlength()) > 0) {
    rbit = ~(~0 << n) & x;
    rbit = rbit << (wordlength() - n);
    x = x >> n;
    x = x | rbit;
  }

  return  x;
}

int wordlength(void) {
  int       i;
  unsigned  x = (unsigned) ~0;

  for (i = 0; (x <<= 1) > 0; i++)
    ;

  return i;
}
