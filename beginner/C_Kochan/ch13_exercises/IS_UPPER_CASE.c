// Exercise 6: IS_UPPER_CASE gives a non-zero value if a character is an uppercase letter.
#include <stdio.h>
#define printName(name)  printf(#name" = %i\n", name)
#define IS_UPPER_CASE(c) ( (c) >= 'A' && (c) <= 'Z' )

int main(void) {
  printName(IS_UPPER_CASE('A'));
  printName(IS_UPPER_CASE('a'));
  printName(IS_UPPER_CASE('+'));
  printName(IS_UPPER_CASE('H'));
  printName(IS_UPPER_CASE('h'));

  return 0;
}
