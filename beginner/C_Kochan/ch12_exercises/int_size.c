// Exercise 3: Function int_size to decide the number of bits in an int on my machine.
#include <stdio.h>

unsigned int int_size(void) {
  unsigned int count = 0, bits1, value = 0;

  bits1 = value | ~(0);

  do {
    ++count;
    bits1 >>= 1;
  } while(bits1 != 0);

  return count;
}

int main(void) {
  unsigned int int_size(void);

  printf("This machine uses %u-bit for int declaration.\n", int_size());

  return 0;
}
