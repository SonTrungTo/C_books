// prog8_8.c modified -> squareRoot with arg epsilon.
/* The number of iterations through the loop is relatively short.
   The number whose square root being calculated is arbitrary.
   The value of the initial guess is arbitrary.
*/
#include <stdio.h>

float absoluteValue(float x) {
  if (x < 0)
    x = -x;

  return x;
}

float squareRoot(float x, double epsilon) {
  int     count = 1;
  double  guess = 1;

  while (absoluteValue(guess*guess - x) >= epsilon) {
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
