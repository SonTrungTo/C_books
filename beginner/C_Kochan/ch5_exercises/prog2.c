/* A table of n and n^2 for n = 1..10 */
#include <stdio.h>

int main(void) {
  int n, n_square;

  printf("TABLE OF n AND n^2 FOR n FROM 1 TO 10\n\n");
  printf("       n                  n^2          \n");
  printf("----------------  -------------------  \n");

  for (n = 1; n < 11; ++n) {
    n_square = n*n;
    printf("      %2i                   %i\n", n, n_square);
  }

  return 0;
}
