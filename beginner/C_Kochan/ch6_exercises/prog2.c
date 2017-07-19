// Test whether the first integer is evenly divided by the second.
#include <stdio.h>

int main(void) {
  int     number1, number2;

  printf("Enter two integers:\n");
  scanf("%i%i", &number1, &number2);

  if (number2 == 0) {
    printf("Division by 0 not accepted!\n");
  } else if (number1 % number2 == 0) {
    printf("Evenly divisible!\n");
  } else {
    printf("Not evenly divisible!\n");
  }

  return 0;
}
