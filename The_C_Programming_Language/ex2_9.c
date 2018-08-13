#include <stdio.h>

/* bitcount: count 1 bits in x, faster version */
int  bitcount(unsigned x);

int main(void) {
  unsigned    x = 9;  /* 1001 */
  unsigned    y = 15; /* 1111 */

  printf("%i\n", bitcount(x));
  printf("%i\n", bitcount(y));

  return 0;
}

int bitcount(unsigned x) {
  int    b;

  for (b = 0; x != 0; x &= (x - 1))
    ++b;

  return  b;
}
