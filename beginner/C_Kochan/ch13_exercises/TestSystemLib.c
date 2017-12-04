// Exercise 11: Testing library functions isupper, isalpha, isdigit
// equivalent to the macros IS_UPPER, IS_ALPHABETIC, IS_DIGIT
#include <stdio.h>
#include <ctype.h>

int main(void) {
  printf("%i\n", isupper('a')); // non-upper char is 0
  printf("%i\n\n", isupper('A')); // upper char is always 256

  printf("%i\n", isalpha('a')); // alphabetic char is always 1024
  printf("%i\n", isalpha('B'));
  printf("%i\n\n", isalpha('0')); // nonalphabetic char is 0

  printf("%i\n", isdigit('1')); // digit character is 2048
  printf("%i\n", isdigit('/')); // nondigit character is 0
  printf("%i\n\n", isdigit('a'));

  return 0;
}
