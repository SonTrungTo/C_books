#include <stdio.h>

/*  print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300    */
int main(void) {
  float   fahr, celsius;
  int     lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  fahr = lower;
  printf("%s\n", "CONVERSION TABLE FROM FAHRENHEIT TO CELSIUS.");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr += step;
  }

  return 0;
}
