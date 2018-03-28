/* The use of abs() instead of fabs() can be disastrous! */
#include <stdio.h>
#include <math.h>     /* fabs */
#include <stdlib.h>   /* abs */

int main(void) {
  double  x = -2.357;

  printf("  abs(x) = %e\n", abs(x)); /* No! */
  printf(" fabs(x) = %e\n", fabs(x));

  return 0;
}
