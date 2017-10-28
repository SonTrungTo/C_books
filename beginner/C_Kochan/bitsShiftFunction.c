/*
*   Example 12.3: bitShift takes two args: the number and the number of bits shifted.
* If the number of bits is positive, bits are shifted left; otherwise, shifted right.
*/
#include <stdio.h>

unsigned int bitShift(unsigned int number,int count) { //unsigned int makes sure the right shift is a logical one!

  if (count < 0)
    number >>= -count;
  else
    number <<= count;

  return number;
}

int main() {
  unsigned int bitShift(unsigned int number,int count);
  unsigned int w1 = 0177777u, w2 = 0444u;

  printf("%o\t%o\n", bitShift(w1,5), w1 << 5);
  printf("%o\t%o\n", bitShift(w1,-6), w1 >> 6);
  printf("%o\t%o\n", bitShift(w2,0), w2 << 0);
  printf("%o\n", bitShift(bitShift(w1,-3),3)); // net effect: w1 & ~7;

  return 0;
}
