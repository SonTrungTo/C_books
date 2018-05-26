#include "ex.h"

short extract_other_bits(int n, char c);

int main(void) {
  int x;

  printf("This program tests bits every other bits extraction.\n"
         "Enter a number: ");
  while (scanf("%d", &x) == 1) {
    printf("Original two's complement representation:   ");
    bit_print(x);
    printf("Every other even bit representation:        ");
    bit_print_16(extract_other_bits(x, 'e'));
    printf("Every other odd bit representation:         ");
    bit_print_16(extract_other_bits(x, 'o'));
    putchar('\n');
  }

  return 0;
}

short extract_other_bits(int n, char c) { // e: 0,2,4,6..., o: 1,3,5,7,...
  short  value = 0;

  if (c == 'e')
    for (int i = 0, j = 0; i < 32; i+=2, j++)
      value |= ((n >> i) & 1) << j;
  else if (c == 'o')
    for (int i = 1, j = 0; i < 32; i+=2, j++)
      value |= ((n >> i) & 1) << j;
  else {
    printf("\nERROR: Bit ordering undetermined!\n\n");
    exit(1);
  }

  return value;
}
