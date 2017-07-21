// Generating Fibonacci numbers using variable length arrays.
#include <stdio.h>

int main(void) {
  int                         fibnums, i;

  printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
  scanf("%i", &fibnums);

  if ( fibnums < 1 || fibnums > 75) {
    printf("Bad number! Re-run the program!\n");
    return 1;
  }

  unsigned long long int      Fibonacci[fibnums];

  Fibonacci[0] = 0; // definition
  Fibonacci[1] = 1; // ditto

  for (i = 2; i < fibnums; i++)
    Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];

  for (i = 0; i < fibnums; i++)
    printf("%llu ", Fibonacci[i]);

  printf("\n");

  return 0;
}
