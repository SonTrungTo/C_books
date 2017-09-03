/**
*   == cannot be used to compared constant character strings, structures, arrays,etc.
* Instead, we have to write equalStrings(string1,string2)
*/
#include <stdio.h>

int main(void) {
  _Bool       equalStrings(const char s1[], const char s2[]);
  const char  stra[] = "Big Boss";
  const char  strb[] = "The Boss";

  printf("%i\n", equalStrings(stra,strb));
  printf("%i\n", equalStrings(stra,stra));
  printf("%i\n", equalStrings(strb, "The Boss")); // expecting array of chars, BUT accept const char string.

  return 0;
}

_Bool equalStrings(const char s1[], const char s2[]) {
  int   i = 0;
  _Bool areEqual;

  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    ++i;

  if (s1[i] == '\0' && s2[i] == '\0')
    areEqual = 1;
  else
    areEqual = 0;

  return areEqual;
}
