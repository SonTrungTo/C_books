#include <stdio.h>

#define     LOWER           0                /* lower limit of table */
#define     UPPER         300                /* upper limit */
#define     STEP           20                /* step size */

double F_to_C(double fahr);                  /* conversion Fahrenheit-Celsius */

int main(void) {
  double    fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    printf("%3.0f %6.1f\n", fahr, F_to_C(fahr));
  return 0;
}

double F_to_C(double fahr) {
  return ((5.0 / 9.0) * (fahr - 32.0));
}
