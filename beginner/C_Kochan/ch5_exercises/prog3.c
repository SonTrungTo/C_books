/* triangularNumber = n(n+1)/2
  A table to generate every fifth triangular number.*/
#include <stdio.h>

int main(void) {
  int n, triangularNumber;

  printf("A table for generating every fifth of triangular number\n\n");
  printf("      n             TRIANGULAR NUMBER\n");
  printf("--------------    ---------------------\n");

  for (n = 5; n <= 50; n += 5) {
    triangularNumber = n*(n+1)/2;
    printf("     %2i                     %i\n", n, triangularNumber);
  }

  return 0;
}
