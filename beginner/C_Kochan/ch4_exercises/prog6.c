/* Solve 3x^3 - 5x^2 + 6 for x = 2.55 */
#include <stdio.h>

int main(void) {
  double x;

  x = 2.55;
  printf("When x = 3, 3x^3 - 5x^2 + 6 is %g\n",
          3*2.55*2.55*2.55 - 5*2.55*2.55 + 6);

  return 0;
}
