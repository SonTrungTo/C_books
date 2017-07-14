// Prog5_8.c revised!
#include <stdio.h>

int main(void) {
  int number, digit;

  printf("Enter an integer:\n");
  scanf("%i", &number);

  do {
    digit = number % 10;
    printf("%i", digit);
    number /= 10;
  } while(number != 0);

  printf("\n");

  return 0;
}
