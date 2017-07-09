/* Convert 27 degrees Fahrenheit (F) to
   degrees Celsius (C)                  */
#include <stdio.h>

int main(void) {
  double C, F;

  F = 27;
  C = (F - 32) / 1.8;
  printf("27 degrees Fahrenheit is %g degrees Celsius.\n", C);

  return 0;
}
