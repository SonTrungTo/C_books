/**
*   intToStr(int,text) := converts an integer value to a character string.
*/
#include <stdio.h>

int absValue(int n) {
  if (n < 0)
    n = -n;

  return n;
}

void intToStr(int n, char text[]) {
  int  i = 0, j, digit, absValue(int n);
  char temp[81];

  if(n < 0) {
    n = absValue(n);
    text[i] = '-';
    ++i;
  }

  do {
    digit   = n % 10;
    n      /= 10;
    temp[i] = digit + '0';
    ++i;
  } while(n != 0);

  text[i] = '\0';
  --i;

  if (text[0] != '-')
    for (j = 0; j <= i; j++)
      text[j] = temp[i - j];
  else
    for (j = 1; j <= i; j++)
      text[j] = temp[i - j + 1];

}

int main(void) {
  char  text[81];

  intToStr(123456,text);
  printf("%s\n", text);
  intToStr(22111988,text);
  printf("%s\n", text);
  intToStr(1101992,text);
  printf("%s\n", text);
  intToStr(-3041975,text);
  printf("%s\n", text);
  intToStr(-1875,text);
  printf("%s\n", text);

  return 0;
}
