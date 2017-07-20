/* Program to emulate a basic printing calculator */
#include <stdio.h>

int main(void) {
  float     number1, number2;
  char      operator;

  printf("Format: number operator\n, using + - * / S E\n");
  printf("S is an accumulator\nE ends the program\n\n\n");

  for (int i = 0; ; i++) {
  scanf("%f %c", &number1, &operator);
  if (operator == 'E') {
    printf("End of calculations.\n");
    break;
  }
  switch (operator) {
    case 'S':
      printf("%g\n", number2 = number1);
      break;
    case '/':
      if (number1 == 0)
        printf("Division by 0 invalid!\n");
      else
        printf("%g\n", number2 /= number1);
      break;
    case '*':
      printf("%g\n", number2 *= number1);
      break;
    case '+':
      printf("%g\n", number2 += number1);
      break;
    case '-':
      printf("%g\n", number2 -= number1);
      break;
    default:
      printf("Wrong syntax! Tarkista uudelleen!\n");
      break;
  }
}
  return 0;
}
