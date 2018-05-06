// print_bits() amateur version
#include <stdio.h>
#include <stdlib.h>

#define   BIT_LENGTH      32

void print_bits(unsigned int n);   // only positive n

int main(void) {
  int      x = 33333;
  int      y = 1 << 31;
  unsigned z = 1 << 31;

  //print_bits(x);
  printf("%d\n", y);
  printf("%u\n", z);
  print_bits(z);

  printf("\n");
  for (size_t i = 0; i < 10; i++)
    print_bits(i);

  return 0;
}

void print_bits(unsigned int n) {
  int   *bit_digit, length = 0, i, zeroes_length;

  bit_digit = calloc(sizeof(int), BIT_LENGTH + 1);
  *bit_digit = -1;
  ++bit_digit;
  while (n != 0) {
    *bit_digit = n % 2;
    ++bit_digit;
    ++length;
    n /= 2;
  }

  zeroes_length = BIT_LENGTH - length;

  for (i = 0; i < zeroes_length; ++i)
    printf("%s%d", (i % 8 == 0) ? " " : "", 0);

  for (--bit_digit; *bit_digit != -1; --bit_digit, ++i)
    printf("%s%d", (i % 8 == 0) ? " " : "", *bit_digit);

  putchar('\n');

}
