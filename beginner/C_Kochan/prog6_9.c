/* Program6_8A(Evaluating expressions) written in the form of
              switch                            */
#include <stdio.h>

int main(void) {
  float value1, value2;
  char  operator;

  printf("Type in your expression: \n");
  scanf("%f %c %f", &value1, &operator, &value2);

  switch (operator) {
    case '+':
      printf("%.2f\n", value1 + value2);
      break;
    case '-':
      printf("%.2f\n", value1 - value2);
      break;
    case '*':
    case 'x':
      printf("%.2f\n", value1 * value2);
      break;
    case '/':
      if (value2 == 0) {
          printf("Division by 0 is invalid.\n");
      } else {
          printf("%.2f\n", value1 / value2);
      }
      break;
    default:
      printf("Fuck you! Retype your expression!\n");
      break;
  }

  return 0;
}
