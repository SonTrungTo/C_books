// Example 13.2: Function to calculate the area and circumference of a circle, and
// the volume of a sphere of a given radius.
#include <stdio.h>

#define PI 3.141592654

double area(double r) {
  return PI * r * r;
}

double circumference(double r) {
  return 2 * PI * r;
}

double volume(double r) {
  return 4/3 * PI * r * r * r;
}

int main(void) {
  double  area(double r), circumference(double r), volume(double r);

  printf("r = 1 \t\t %.3f  %.3f  %.3f\n", area(1), circumference(1), volume(1));
  printf("r = 4.5674 \t %g  %g  %g\n", area(4.5674), circumference(4.5674),
volume(4.5674));

  return 0;
}
