// Exercise 3: Define MIN preprocessor, working for any two values (bit manipulation not included here!)
#include <stdio.h>
#define printName(name) printf(#name " = %g\n", name)
#define MIN(x,y) ( ((float) x) < ((float) y) ? ((float) x) : ((float) y) )

int main(void) {
  printName(MIN(1,2));
  printName(MIN(6 + 6 * 3,9 / 100 + 10));
  printName(MIN(1 * 5,2 + 3) * 100);
  return 0;
}
