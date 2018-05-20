#include "ex.h"

int circular_shift(int a, int n);

int main(void) {
  int    a1 = 129; /* 10000001 */
  int    a2 = 107; /* 01101011 */

  printf("a1 =                      ");
  bit_print(a1);
  printf("a2 =                      ");
  bit_print(a2);
  printf("Circular shift 25 of a1 = ");
  bit_print(circular_shift(a1, 25));
  printf("Circular shift 27 of a2 = ");
  bit_print(circular_shift(a2, 27));

  return 0;
}


int circular_shift(int a, int n) {
  int   size = sizeof(int) * CHAR_BIT;
  int   mask = 1 << (size - 1);
  int   i, digit;

  for (i = 1; i <= n; i++) {
    digit = (a & mask) == 0 ? 0 : 1;
    a = (a << 1) | digit;
  }

  return a;
}
