// Exercise 4: Definition of MAX3 to pick the maximum of three values.
// This is an improved solution also to MIN.c
#include <stdio.h>
#define printNameNumber(name)     printf(#name" = %g\n", name)
#define printNameBit(name)        printf(#name" = %i\n", name)
#define MAX2(x,y)                 ( (x) > (y) ? x : y )
#define MAX3(x,y,z)               ( MAX2(x,y) > (z) ? MAX2(x,y) : z )

int main(void) {
  printNameNumber(MAX3(2.5 / 2,1,0));
  printNameNumber(MAX3((float) 2.5 / 3,(float) 9*8 / 7, 10.2)); // Peculiarity: 2.5 / 2 = 1.25 (correctly), but 9 * 8 / 7 = 10!
                                                                // Hence, the unit conversion to float.
  printNameBit(MAX3(13|1,2&25,3^1));

  return 0;
}
