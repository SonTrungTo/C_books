// Program showing the sum of all digits of a random integer.
#include <stdio.h>

int main(void) {
  int number, digit, sum = 0;

  printf("Please enter an integer: ");
  scanf("%i", &number);

  if (number >= 0) {
    do {
      digit = number % 10;
      sum += digit;
      number /= 10;
    } while(number != 0);
  } else {
    number = -number;
    do { //--- Start here, this part needs to be modified because it is brittle.
      digit = number % 10;
      sum += digit;
      number /= 10;
      if (number == 0) {  // e.g, -21 = -2 + 1 = -4 + 2 + 1
        sum -= 2*digit;
      }
    } while(number != 0);
       //----- The end.
  }

  printf("The sum of each of its digits is %i\n", sum);

  return 0;
}
