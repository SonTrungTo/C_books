// Exercise 5: Writing two functions bit_test and bit_set.
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

// bit_test function to return value at bit number n.
unsigned int bit_test(unsigned int value, int n_bit) {
  unsigned int int_size(void), rightmostBitWanted;

  if (n_bit < 0 || n_bit > (int_size() - 1)) {
    printf("Re-check the second argument of bit_test. ");
    return 2;
  }

  rightmostBitWanted = value >> (int_size() - 1 - n_bit);

  return (rightmostBitWanted & 1);
}

// bit_set function turns bit n on.
unsigned int bit_set(unsigned int value, int n_bit) {
  unsigned int int_size(void);

  if (n_bit < 0 || n_bit > (int_size() - 1)) {
    printf("Re-check the second argument of bit_set. ");
    return 2;
  }

  return (value | 1 << (int_size() - 1 - n_bit));
}

int main(void) {
  unsigned int bit_test(unsigned int value, int n_bit);
  unsigned int bit_set(unsigned int value, int n_bit);
  unsigned int w1 = 0xffu, w2 = 1;

  printf("%u\n", bit_test(w1, 30));
  printf("%u\n", bit_set(w1, 0));
  printf("%u\n", bit_set(w1,99));
  printf("%u\n", bit_set(bit_set(w2,30),29));
  printf("%u\n", bit_test(bit_set(bit_set(w2,30),29),28));

  return 0;
}
