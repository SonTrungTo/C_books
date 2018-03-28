/* Testing ANSI/IEEEE Std 754-1985 */
#include <stdio.h>

int main(void) {
  double  x = 1e+307;
  double  y = x * x;

  printf("x = %e   y = %e\n", x, y);

  return 0;
}
