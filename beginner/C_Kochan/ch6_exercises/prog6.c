/* Program to translate type-in integer to
   be read in English for each digit.      */
// This program sucks when there is a '0' as its digits.
#include <stdio.h>

int main(void) {
  int      number, digit = 1, number2, count = 1;

  printf("WELCOME!\n");
  printf("This program translates a random integer ");
  printf("into English for each digit from which\nthe integer is made.");
  printf("e.g, 932 is read 'nine three two'\n\n");
  printf("Enter an integer: \n");
  scanf("%i", &number);

  number2 = number;
  do { // These codes assign the value of count for division
    count *= 10;
    if (number < 0)
      number = -number;
    digit   = number % 10;
    number /= 10;
  } while(number != 0);
  //--------------------------------------------------------

  do {
    count /= 10;
    if (number2 < 0) {
      number2 = -number2;
    }
    digit     = number2 / count;
    if (digit == 0) { // This case for, e.g, 0/10, number2 = 0
      digit   = number2 % count;
      number2 = 0;
    }
    else {
      number2  %= count; // This equals to zero when 9000 / 1000
    }
    switch (digit) {
      case 0:
        printf("zero ");
        break;
      case 1:
        printf("one ");
        break;
      case 2:
        printf("two ");
        break;
      case 3:
        printf("three ");
        break;
      case 4:
        printf("four ");
        break;
      case 5:
        printf("five ");
        break;
      case 6:
        printf("six ");
        break;
      case 7:
        printf("seven ");
        break;
      case 8:
        printf("eight ");
        break;
      case 9:
        printf("nine ");
        break;
      default:
        printf("Not a valid digit!\n");
        break;
    }
  } while(number2 != 0);

  return 0;
}
