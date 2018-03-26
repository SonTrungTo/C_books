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
    if (x >= 0.0) /* Test 0 to see if error */ {
      printf("\n%15s%22.15e");
    } else {
      /* code */
    }
  }

  return 0;
}
