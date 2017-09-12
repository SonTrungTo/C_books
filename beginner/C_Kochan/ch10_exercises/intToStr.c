/**
*   intToStr(int,text) := converts an integer value to a character string.
*/
#include <stdio.h>

void intToStr(int n, char text[]) {
  int  i = 0, j, digit;
  char temp[81];

  do {
    digit   = n % 10;
    n      /= 10;
    temp[i] = digit + '0';
    ++i;
  } while(n != 0);

  text[i] = '\0';
  --i;

  for (j = 0; j <= i; j++)
    text[j] = temp[i - j];

}

int main(void) {
  char  text[81];

  intToStr(123456,text);
  printf("%s\n", text);
  intToStr(22111988,text);
  printf("%s\n", text);
  intToStr(1101992,text);
  printf("%s\n", text);

  return 0;
}
