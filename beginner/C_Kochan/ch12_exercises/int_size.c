// Exercise 3: Function int_size to decide the number of bits in an int on my machine.
#include <stdio.h>

unsigned int int_size(signed int value) {
  unsigned int count = 0, bits1;

  bits1 = value | ~(0);

  do {
    ++count;
    bits1 >>= 1;
  } while(bits1 != 0);

  return count;
}

int main(void) {
  unsigned int int_size(signed int value);
  signed   int w1 = 0xF777EE22, w2 = 0xff, w3 = 0xabcdef00, w4 = 0xffff1122, w5 = 0;

  printf("%u\n", int_size(w1));
  printf("%u\n", int_size(w2));
  printf("%u\n", int_size(w3));
  printf("%u\n", int_size(w4));
  printf("%u\n", int_size(w5));

  return 0;
}
