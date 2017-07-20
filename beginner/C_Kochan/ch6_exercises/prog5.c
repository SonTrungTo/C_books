// Program to reverse digits of an arbitrary integer.
#include <stdio.h>

int main(void) {
  int     number, digit;

  printf("Reverse digits of an integer.\n");
  printf("Enter a random integer: \n");
  scanf("%i", &number);
  printf("\n\n");

  if (number < 0) {
    number = -number;
    do {
      digit   = number % 10;
      number /= 10;
      printf("%i", digit);
    } while(number != 0);
    printf("-\n");
  } else {
    do { //--- These are not good!
      digit   = number % 10;
      number /= 10;
      printf("%i", digit);
    } while(number != 0);
        //--- End
  }

  return 0;
}
