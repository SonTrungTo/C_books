/* Testing sin^2 + cos^2 = 1 */
#include <math.h>
#include <stdio.h>

int main(void) {
  double   two_pi = 2.0 * M_PI; /* in math.h */
  double   h      = 0.1;        /* step size */
  double   x;

  for (x = 0; x < two_pi; x += h) {
    printf("%5.1f: %.15f\n",    /* If changed to %.15e, binary system makes not all == 1 (ex1.c) */
        x, sin(x) * sin(x) + cos(x) * cos(x));
  }

  return 0;
}
