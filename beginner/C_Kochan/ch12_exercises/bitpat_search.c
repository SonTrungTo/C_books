// Exercise 6: bitpat_search(source,pattern,n) searches source, starting from
// the leftmost, for the rightmost n bits of pattern occur.
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

// bitpat_search returns the starting index of the pattern; -1 otherwise.
int bitpat_search(unsigned int source, unsigned int pattern, int n) {
  unsigned int int_size(void), bit_test(unsigned int value, int n_bit);
  int          count_source = 0, count_pattern = 0, index;

  if (n <= 0 || n > int_size()) {
    printf("Invalid bits number of pattern.\n");
    return -1;
  }

  while (bit_test(source,count_source) == 0)
    ++count_source;

  while (bit_test(pattern,count_pattern) == 0)
    ++count_pattern;

  for (count_pattern; count_pattern < n; i++) {
    /* code */
  }

  return 0;
}
