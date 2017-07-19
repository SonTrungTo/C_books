/* Program to evaluate simple expressions of the form
     value    operator    value                       */
#include <stdio.h>

int main(void) {
  float value1, value2;
  char  operator;

  printf("Enter your expression: \n");
  scanf("%f %c%f", &value1, &operator, &value2); //scanf ignores leading spaces for float

  if (operator == '+') {
    printf("%.2f\n", value1 + value2);
  } else if (operator == '-') {
    printf("%.2f\n", value1 - value2);
  } else if (operator == '*') {
    printf("%.2f\n", value1 * value2);
  } else if (operator == '/') {
    if (value2 == 0)
      printf("Division by 0 is invalid!\n");
    else
      printf("%.2f\n", value1 / value2);
  } else
      printf("Your expression is just stupid!\n");

  return 0;
}
