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
  
}


// bitpat_set
unsigned int bitpat_set(unsigned int *source, unsigned int value, int start, int size) {
  unsigned int int_size(void), finalValue;
  int          upperLimit = start + size;

  if (size <= 0 || size > (int_size() - start)) {
    printf("Invalid size of bit field.\n");
    return 0;
  }

  if (start < 0 || start > int_size() - 1) {
    printf("Invalid starting index to set bit.\n");
    return 0;
  }

  finalValue = *source | (0 | value << int_size() - size) >> start;

  return finalValue;
}

//Testing
int main(void) {
  unsigned int int_size(void);
  unsigned int bitpat_set(unsigned int *source, unsigned int value, int start, int size);
  unsigned int x = 0x55u;

  printf("%u\n", bitpat_set(&x,0x55u,0,8));
  printf("%u\n", bitpat_set(&x,0x55u,int_size() - 8,7)); // This is not good!

  return 0;
}
