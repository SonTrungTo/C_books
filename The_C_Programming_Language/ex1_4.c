#include <stdio.h>

int main(void) {
  float   fahre, celsius;
  int     lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  celsius = lower;
  printf("%s\n", "CONVERSION TABLE FROM CELSIUS TO FAHRENHEIT.");
  while (celsius <= upper) {
    fahre = (9.0 / 5.0) * celsius + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahre);
    celsius += step;
  }

  return 0;
}
