#include <stdio.h>

int main(void) {
  int answer, result;

  answer = 100;
  result = answer - 10;
  printf("The result is %i\n", result + 5);
  // Expecting: 95

  return 0;
}
