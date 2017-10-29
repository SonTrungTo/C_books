// Example 12.4: Illustrating rotation of integers.
// The bits shifted came back in the opposite direction of the shift!
// ASSUMPTION: int uses 32 bits.
#include <stdio.h>

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

// If n > 0 shift left, n < 0, shift right.
unsigned int rotate(unsigned int x, int n) {
  unsigned int bits, result;

  if (n > 0)
    n %= 32;
  else
    n = -(-n % 32);

  if (n == 0)
    result = x;
  else if (n > 0) {
    bits   = x >> (32 - n);
    result = x << n | bits;
  } else {
    n      = -n;
    bits   = x << (32 - n);
    result = x >> n | bits;
  }

  return result;
}
