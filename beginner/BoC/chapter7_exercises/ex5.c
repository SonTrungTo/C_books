#include "ex.h"

int  reverse_bit(int a);

int  main(void) {
  int   x1 = 117; /* 01110101 */
  int   x2 = 175; /* 10101111 */

  printf("x1 =          ");
  bit_print(x1);
  printf("x2 =          ");
  bit_print(x2);
  printf("Reverse_x1 =  ");
  bit_print(reverse_bit(x1));
  printf("Reverse_x2 =  ");
  bit_print(reverse_bit(x2));

  return 0;
}

int   reverse_bit(int a) {
  int   size = sizeof(int) * CHAR_BIT;
  int   b = 0;
  int   i, digit;

  for (i = 1; i <= size; i++) {
    digit = a & 1;
    a >>= 1;
    b <<= 1;
    b |= digit;
  }

  return b;
}
