/* Testing results from the table */
#include <stdio.h>

int main(void) {
  int     a = 1, b = 2, c = 3, d = 4;
  double  x = 1.0;

  printf("%29s%19d\n%29s%19d\n%29s%19d\n%29s%19d\n",
    "a > b && c < d", a > b && c < d,
    "a < ! b || ! ! a", a < ! b || ! ! a,
    "a + b < ! c + c", a + b < ! c + c,
    "a - x || b * c && b / a", a - x || b * c && b / a);

  return 0;
}
