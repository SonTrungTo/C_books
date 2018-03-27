/* Test whether printf() truncates or rounds when writing float or double
with a fractional part. */
#include <stdio.h>

int main(void) {
  double x = .5612345123451236;
  float  y = 2.4999999999;

  printf("%.15f %.15f\n", x, y); /* This compiler follows ANSI C standard: rounded */

  return 0;
}
