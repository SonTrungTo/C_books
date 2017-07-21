// Program to convert a positive integer into another base.
/* This program is sloppy because:
    1. No check for the base between 2 and 16.
    2. Consequently, division by 0 is a horrible thing!
    => WILL BE REWRITTEN!
*/
#include <stdio.h>

int main(void) {
  const char baseDigits[16]={
    '0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F'
  };
  int       convertedNumber[64];
  long int  numberToConvert;
  int       base, index = 0, nextDigit;

  // Initializing your number and base
  printf("Enter the number to convert: ");
  scanf("%li", &numberToConvert);
  printf("Enter the base: ");
  scanf("%i", &base);

  // convert to the indicated base
  do {
    convertedNumber[index] = numberToConvert % base;
    ++index;
    numberToConvert /= base;
  } while(numberToConvert != 0);

  // display the result in reverse order
  printf("Converted number = ");

  for (--index; index >= 0; --index) {
    nextDigit = convertedNumber[index];
    printf("%c", baseDigits[nextDigit]);
  }

  printf("\n");
  return 0;
}
