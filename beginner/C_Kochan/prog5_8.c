// Program to reverse the digits of a number
#include <stdio.h>

int main(void) {
  int number, digit;

  printf("Enter an integer:\n");
  scanf("%i", &number);

  while (number != 0) {
    digit = number % 10;
    printf("%i", digit);
    number /= 10;
  }

  printf("\n");

  return 0;
}
