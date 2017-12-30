// Program 19.1: Simple program to work with fractions in C.
#include <stdio.h>

typedef struct {
  int numerator;
  int denominator;
} Fraction;

int main(void) {
  Fraction myFrac;

  myFrac = (Fraction) {1, 3};

  printf("The fraction is %i/%i\n", myFrac.numerator, myFrac.denominator);

  return 0;
}
