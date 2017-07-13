// Asking the User for Input
#include <stdio.h>

int main(void) {
  int n, number, triangularNumber;

  printf("What triangular number do you want? ");
  scanf("%i", &number); // Chapter 11: Pointers for '&' operator.

  triangularNumber = 0;

  for (n = 1; n <= number; ++n) {
    triangularNumber += n;
  }

  printf("Triangular number %i is %i\n", number, triangularNumber);

  return 0;
}
