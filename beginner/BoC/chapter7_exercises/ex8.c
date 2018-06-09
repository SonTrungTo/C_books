#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

void  createTable_n_10(void);
void  createTable_n(void);
void  bit_print(int n);

int main(void) {
  createTable_n();
  putchar('\n');
  createTable_n_10();
  return 0;
}

void createTable_n(void) {
  int   n;

  printf("%35s\n",   "TABLE OF N");
  printf("%40s\n\n", "---------------------");

  for (n = 0; n <= 32; n++) {
    printf("%3i: ", n);
    bit_print((int) pow(2, n) - 1);
    printf("%10s", "");
    bit_print((int) pow(2,n));
    putchar('\n');
  }
}

void createTable_n_10(void) {
  int   n;
  int   power = 1;

  printf("%35s\n",   "TABLE OF N (BASE 10)");
  printf("%40s\n\n", "---------------------");

  for (n = 0; n <= 7; n++) {
    printf("%3i: ", n);
    bit_print(power - 1);
    printf("%10s", "");
    bit_print(power);
    putchar('\n');
    power *= 10;
  }
}

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
}
