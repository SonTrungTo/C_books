/* prog8_14.c modified:
 * If the wrong base is given, prog continues to ask for the base.
 */

#include <stdio.h>

int      convertedNumber[64];
long int numberToConvert;
int      base;
int      digit = 0;

void getNumberAndBase(void) {
  int   i;

  printf("Number to be conveted?\n");
  scanf("%li", &numberToConvert);

  printf("Base?\n");
  scanf("%i", &base);

//----- Modification starts here
  for (i = 0; ; )
    if (base < 2 || base > 16) {
      printf("Bad base - must be between 2 and 16. ");
      printf("Re-enter the base:\n");
      scanf("%i", &base);
    }
    else
      break;
//----- Modification ends here
}

void convertNumber(void) {
  do {
    convertedNumber[digit] = numberToConvert % base;
    ++digit;
    numberToConvert /= base;
  } while(numberToConvert != 0);
}

void displayConvertedNumber(void) {
  const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                               'A', 'B', 'C', 'D', 'E', 'F'};
  int        nextDigit;

  printf("Converted number = ");

  for (--digit; digit >= 0; --digit) {
    nextDigit = convertedNumber[digit];
    printf("%c", baseDigits[nextDigit]);
  }

  printf("\n");
}

int main(void) {
  void getNumberAndBase(void), convertNumber(void), displayConvertedNumber(void);

  getNumberAndBase();
  convertNumber();
  displayConvertedNumber();

  return 0;
}
