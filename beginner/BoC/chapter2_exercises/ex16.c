/*
*   Checking results in ex.
*/
#include <stdio.h>

int main(void) {
  int   a = 2, b = -3, c = 5, d = -7, e = 11;

  printf("a / b / c = %i\n", a / b / c);
  printf("%i\n", 7 + c * -- d / e);
  printf("%i\n", 2 * a % - b + c + 1);
  printf("%i\n", 39 / - ++ e - + 29 % c);
  printf("%i\n", a += b += c += 1 + 2);
  printf("%i\n", 7 - + ++a % (3 + b)); /* Run-time error. */

  return 0;
}
