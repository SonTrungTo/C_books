/* Program showing the result of divsion of two integers, with
three-decimal-place accuracy.                                  */
#include <stdio.h>

int main(void) {
  int      number1, number2;

  printf("Enter two arbitrary integers: \n");
  scanf("%i%i", &number1, &number2);

  if (number2 == 0) {
    printf("Division by 0 is invalid.\n");
  } else {
    printf("The result is %.3g\n", (float) number1 / number2);
  }

  return 0;
}
