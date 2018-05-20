#include <stdio.h>
#include <limits.h>

void  bit_print_16(short n);
short majority(short a, short b, short c);

int main(void) {
  short  n1 = 18; /* 00000000 00010010 */
  short  n2 = 10; /* 00000000 00001010 */
  short  n3 = ~1; /* 11111111 11111110 */

  printf("n1 =        ");
  bit_print_16(n1);
  printf("n2 =        ");
  bit_print_16(n2);
  printf("n3 =        ");
  bit_print_16(n3);
  printf("majority =  ");
  bit_print_16(majority(n1, n2, n3));
  return 0;
}

short majority(short a, short b, short c) {
  return (a & b | a & c | b & c);
}

void bit_print_16(short n) {
  int   size  = sizeof(short) * CHAR_BIT;
  int   mask  = 1 << (size - 1);
  int   i;

  for (i = 1; i <= size; i++) {
    putchar((n & mask) == 0 ? '0' : '1');
    n <<= 1;
    if (i % CHAR_BIT == 0 && i < size)
      putchar(' ');
  }
  putchar('\n');
}
