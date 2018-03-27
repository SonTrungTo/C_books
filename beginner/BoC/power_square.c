#include <math.h>
#include <stdio.h>

int main(void) {
  double  x;

  printf("\n%s",
         "The following will be computed:\n"
         "\n"
         "   the square root of x\n"
         "   x raised to the power of x\n"
         "\n");

  while (1) {
    printf("Input x:  ");
    if (scanf("%lf", &x) != 1)
      break;
    if (x >= 0.0) {
      printf("\n%15s%22.15e\n%15s%22.15e\n%15s%22.15e\n\n",
          "x = ", x,
          "sqrt(x) = ", sqrt(x),
          "pow(x, x) = ", pow(x, x));
    } else {
      printf("\nSorry, your number must be nonnegative.\n");
      break;
    }
  }

  printf("\nBye!\n\n");

  return 0;
}
