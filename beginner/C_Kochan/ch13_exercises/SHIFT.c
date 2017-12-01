// Exercise 5: macro SHIFT to perform the shifting bits, as in bitShiftFunction.c
#include <stdio.h>
#define printName(name) printf(#name" = %o\n", name);
#define SHIFT(n,c)      ( (c) > 0 ? (n << c) : (n >> (-c)) )

int main(void) {
  unsigned int w1 = 0177777u, w2 = 0444u;

  printName(SHIFT(w1,5));
  printName(SHIFT(w1,-6));
  printName(SHIFT(w2,0))
  printName(SHIFT(SHIFT(w1,-3),3)); // net effect: w1 & ~7;

  return 0;
}
