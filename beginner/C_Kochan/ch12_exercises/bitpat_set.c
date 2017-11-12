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

// Return n-th bit.
unsigned int bit_test(unsigned int value, int n_bit) {
  unsigned int int_size(void), rightmostBitWanted;

  if (n_bit < 0 || n_bit > (int_size() - 1)) {
    printf("Re-check the second argument of bit_test. ");
    return 2;
  }

  rightmostBitWanted = value >> (int_size() - 1 - n_bit);

  return (rightmostBitWanted & 1);
}

// Print the bits
void printBits(unsigned int value) {
  unsigned int int_size(void), bit_test(unsigned int value, int n_bit);

  for (int i = 0, upperBound = int_size(); i < upperBound; i++) {
    if (i % 5 == 4)
      printf(" ");
    printf("%u", bit_test(value,i));
  }

  printf("\n");
}

// Eliminate 0s on the left hand side of the bits
unsigned int countBits(unsigned int value) {
  unsigned int count = 0;

  while ((value >> count) > 0)
    ++count;

  return count;
}

// bitpat_set
void bitpat_set(unsigned int *source, unsigned int value, int start, int size) {
  unsigned int int_size(void), countBits(unsigned int value);
  void         printBits(unsigned int value);
  unsigned int startingBit = countBits(*source);

  if (size <= 0 || size > (int_size() - start)) {
    printf("Invalid size of bit field.\n");
  }

  if (start < 0 || start > int_size() - 1) {
    printf("Invalid starting index to set bit.\n");
  }

}

//Testing
int main(void) {
  unsigned int int_size(void);
  unsigned int bitpat_set(unsigned int *source, unsigned int value, int start, int size);
  unsigned int x = 0x55u;

  printf("%u\n", bitpat_set(&x,0x55u,0,8));

  return 0;
}
