// Example to illustrate communication between modules.
#include <stdio.h>
double x;
static double result;

static void doSquare(void) {
  double square(void); // Prototype declaration

  x = 2.0;          // Step 1: This is first borrowed in mod2.c
  result = square();// After that, square() is given to the result.
}

int main(void) {
  doSquare();
  printf("%g\n", result);

  return 0;
}
