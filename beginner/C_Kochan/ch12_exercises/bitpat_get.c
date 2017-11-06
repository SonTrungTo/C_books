// Exercise 7: bitpat_get extracts from unsigned int a number of n bits
// starting from the index number.
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

// bit_test function to return 1 bit number n; otherwise 0.
unsigned int bit_test(unsigned int value, int n_bit) {
  unsigned int int_size(void), rightmostBitWanted;

  if (n_bit < 0 || n_bit > (int_size() - 1)) {
    printf("Re-check the second argument of bit_test. ");
    return 2;
  }

  rightmostBitWanted = value >> (int_size() - 1 - n_bit);

  return (rightmostBitWanted & 1);
}

// bitpat_get
unsigned int bitpat_get(unsigned int source, int start, int bit_count) {
  unsigned int int_size(void), bit_test(unsigned int value, int n_bit);
  unsigned int value = 0;

  if (bit_count <= 0 || bit_count > (int_size() - start)) {
    printf("Invalid number of bits extracted!\n");
    return 0;
  }

  if (start < 0 || start > int_size() - 1) {
    printf("Invalid starting index to extract bits.\n");
    return 0;
  }

  for (int i = start; i < bit_count; i++) {
    value <<= 1;
    value = value | bit_test(source,i);
    printf("%u\n", bit_test(source,i));
  }

  return value;
}

// Testing.
int main(void) {
  unsigned int bitpat_get(unsigned int source, int start, int bit_count);
  unsigned int x = 0xE28FF15Bu, y = 6;

  printf("%u\n", bitpat_get(y,29,3));

  return 0;
}
