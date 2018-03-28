/* Find the biggest value of x so that pow(x,x) is acceptable */
#include <stdio.h>
#include <math.h>

int main(void) {
  double  x;

  for (x = 1e+5; pow(x , x) == INFINITY; --x) {}
  printf("pow(%.1lf, %.1lf) = %.7e\n", x, x, pow(x, x));

  return 0;
}
