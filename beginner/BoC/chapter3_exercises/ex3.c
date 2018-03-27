/* Trigonometry table for sin, cos, tan from 0 to 2pi */
#include <math.h>
#include <stdio.h>

int main(void) {
  double  two_pi = 2.0 * M_PI;
  double  h      = two_pi / 20;
  double  x;

  printf("%5s%40s%40s%40s\n%5s%40s%40s%40s\n\n",
        "x","sin(x)","cos(x)","tan(x)",
    "-----","------","------","------");
  for (x = 0; x < two_pi; x += h) {
      printf("%5.1f%40.15e%40.15e%40.15e\n",
           x, sin(x), cos(x), tan(x));
  }

  return 0;
}
