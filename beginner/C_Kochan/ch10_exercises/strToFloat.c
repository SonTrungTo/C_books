/**
*   strToFloat("float");
* converts a string of float number to actual float number.
*/
#include <stdio.h>
#include <stdbool.h>

bool isDot(const char string[]) {
  int i = 0;

  while (string[i]) {
    if (string[i] == '.')
      return true;
    ++i;
  }

  return false;
}

int stringLength(const char source[]) {
  int count = 0;

  while (source[count])
    ++count;

  return count;
}

float strToFloat(const char string[]) {
  bool   isDot(const char string[]);
  float  result = 0, resultF = 0;
  int    i, intValue, resultI = 0, stringLength(const char source[]);

  if (isDot) {
    for (i = 0; string[i] != '.'; i++) {
      intValue = string[i] - '0';
      resultI  = resultI * 10 + intValue;
    }

    for (i = stringLength(string) - 1; string[i] != '.'; i--) {
      intValue = string[i] - '0';
      resultF  = (resultF + intValue) / 10;
    }

    result = resultI + resultF;
  }

  return result;
}

int main(void) {
  float strToFloat(const char string[]);

  printf("%f\n", strToFloat("1.23"));

  return 0;
}
