/*  prog8_8.c modified
  - The test of ratio is used for too small or too big number.
  - double precision values are now used.
  - Test for negative number are now used.
*/
#include <stdio.h>

float absoluteValue(float x) {
  if (x < 0)
    x = -x;

  return x;
}

double squareRoot(double x, double epsilon) { // Change #1
  int     count = 1;
  double  guess = 1;

  if (x < 0) {    // Change #2
    printf("WARNING: arg of squareRoot is negative. Asume: -arg\n");
    x = -x;
  }

  while (absoluteValue(guess*guess / x - 1) >= epsilon) { // Change #3
    guess = (x / guess + guess) / 2;
    printf("guess %i = %g\n", count, guess);
    ++count;
  }

  return guess;
}

int main(void) {
  printf("squareRoot(7,0.1)       = %g\n", squareRoot(7,0.1));
  printf("squareRoot(7,0.0001)    = %g\n", squareRoot(7,0.0001));
  printf("squareRoot(7,0.0000001) = %g\n", squareRoot(7,0.0000001));

  return 0;
}
