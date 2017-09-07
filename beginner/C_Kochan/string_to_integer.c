/**
*   Function to convert string to integer.
* With 2 deficiencies: 1. This function accepts negative integers.
*                      2. This function accepts invalid chars, e.g, "xxx"
*/
#include <stdio.h>

int strToInt(const char string[]) {
  int i, intValue, result = 0;

  for (i = 0; string[i] >= '0' && string[i] <= '9'; i++) {
    intValue = string[i] - '0';
    result = result * 10 + intValue;
  }

  return result;
}


int main(void) {
  int   strToInt(const char string[]);

  printf("%i\n", strToInt("232"));
  printf("%i\n", strToInt("xxx"));
  printf("%i\n", strToInt("-123"));
  printf("%i\n", strToInt("3565473"));
  printf("%i\n", strToInt("100") + 25);
  printf("%i\n", strToInt("13x5"));

  return 0;
}
