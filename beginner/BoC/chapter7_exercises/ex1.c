#include <stdio.h>
#include <limits.h>

void bit_print_16(int n);

int main(void) {
  bit_print_16(1);
  bit_print_16(~1 + 1);
  bit_print_16(5);
  bit_print_16(~5 + 1);
  bit_print_16(101);
  bit_print_16(~101 + 1);
  bit_print_16(1023);
  bit_print_16(~1023 + 1);

  return 0;
}

void bit_print_16(int n) {
  int   size = 2 * CHAR_BIT;
  int   mask = 1 << (size - 1);
  int   i;

  for (i = 1; i <= size; i++) {
    putchar((n & mask) == 0 ? '0' : '1');
    n <<= 1;
    if (i % CHAR_BIT == 0 && i < size)
      putchar(' ');
  }
  putchar('\n');
}
