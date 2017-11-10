// Exercise 8: bitpat_set sets a specified set of bits to a particular value.
#include <stdio.h>

// Add int_size from previous exercises
unsigned int int_size(void) {
  unsigned int count = 0, bits1, value = 0;

  bits1 = value | ~(0);

  while(bits1 != 0) {
    ++count;
    bits1 >>= 1;
  }

  return count;
}

// bit_test function to return 1 bit number n.
unsigned int bit_test(unsigned int value, int n_bit) {
  unsigned int int_size(void), rightmostBitWanted;

  if (n_bit < 0 || n_bit > (int_size() - 1)) {
    printf("Re-check the second argument of bit_test. ");
    return 2;
  }

  rightmostBitWanted = value >> (int_size() - 1 - n_bit);

  return (rightmostBitWanted & 1);
}

// bitpat_set
unsigned int bitpat_set(unsigned int *source, unsigned int value, int start, int size) {
  unsigned int int_size(void);
  int          upperLimit = start + size;

  if (size <= 0 || size > (int_size() - start)) {
    printf("Invalid size of bit field.\n");
    return 0;
  }

  if (start < 0 || start > int_size() - 1) {
    printf("Invalid starting index to set bit.\n");
    return 0;
  }

  return *source;
}
