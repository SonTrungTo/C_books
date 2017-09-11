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

double strToFloat(const char string[]) {
  bool   isDot(const char string[]);
  double  result = 0, resultF = 0;
  int    i, intValue, resultI = 0, stringLength(const char source[]);

  if (isDot(string)) {
    if (string[0] == '-') {
      for (i = 1; string[i] != '.' && string[i] >= '0' && string[i] <= '9'; i++) {
        intValue = '0' - string[i];
        resultI  = resultI * 10 + intValue;
      }

      for (i = stringLength(string) - 1; string[i] != '.' && string[i] >= '0'
      && string[i] <= '9'; i--) {
        intValue = '0' - string[i];
        resultF  = (intValue + resultF) / 10;
      }

      result = resultI + resultF;
    } else {
      for (i = 0; string[i] != '.' && string[i] >= '0' && string[i] <= '9'; i++) {
        intValue = string[i] - '0';
        resultI  = resultI * 10 + intValue;
      }

      for (i = stringLength(string) - 1; string[i] != '.' && string[i] >= '0'
      && string[i] <= '9'; i--) {
        intValue = string[i] - '0';
        resultF  = (resultF + intValue) / 10;
      }

      result = resultI + resultF;
    }
  }
  else { // If there are no dots, the function acts like strToInt
    if (string[0] == '-')
      for (i = 1; string[i] >= '0' && string[i] <= '9'; i++) {
        intValue = '0' - string[i];
        result   = result * 10 + intValue;
      }
    else
      for (i = 0; string[i] >= '0' && string[i] <= '9'; i++) {
        intValue = string[i] - '0';
        result   = result * 10 + intValue;
      }
  }

  return result;
}

int main(void) {
  double strToFloat(const char string[]);

  printf("%f\n", strToFloat("1.23"));
  printf("%f\n", strToFloat("-867.6921"));
  printf("%f\n", strToFloat("12345"));
  printf("%f\n", strToFloat("-987654321"));
  printf("%f\n", strToFloat("123xx456"));
  printf("%f\n", strToFloat("xxx"));

  return 0;
}
