#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void  bit_print(int n);
void  bit_print_16(short n);
void  bit_print_ul(unsigned long n);

void bit_print(int n) {
  int   size = sizeof(int) * CHAR_BIT;
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

void bit_print_16(short n) {
  int   size = sizeof(short) * CHAR_BIT;
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

void bit_print_ul(unsigned long n) { // ul == 64 bits
  int   size = sizeof(unsigned long) * CHAR_BIT;
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
