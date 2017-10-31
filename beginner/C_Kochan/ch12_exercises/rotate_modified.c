// Exercise 4: rotate combined with int_size to remove assumption of 32 bits.
#include <stdio.h>

unsigned int int_size(unsigned int value) {
  unsigned int count = 0, bits1;

  bits1 = value | ~(0);

  do {
    ++count;
    bits1 >>= 1;
  } while(bits1 != 0);

  return count;
}

// Modified rotate function.
unsigned int rotate(unsigned int x, int n) {
  unsigned int int_size(unsigned int value);
  unsigned int bits, result, bitSystem;

  bitSystem = int_size(x);

  if (n > 0)
    n %= bitSystem;
  else
    n = -(-n % bitSystem);

  if (n == 0)
    result = x;
  else if (n > 0) {
    bits   = x >> (bitSystem - n);
    result = x << n | bits;
  } else {
    n      = -n;
    bits   = x << (bitSystem - n);
    result = x >> n | bits;
  }

  return result;
}

// Running the program.
int main(void) {
  unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
  unsigned int rotate(unsigned int x, int n);

  printf("%x\n", rotate(w1, 8));
  printf("%x\n", rotate(w1, -16));
  printf("%x\n", rotate(w2, 4));
  printf("%x\n", rotate(w2, -2));
  printf("%x\n", rotate(w1, 0));
  printf("%x\n", rotate(w1, 44)); // This is where mod operation might be useful!

  return 0;
}
