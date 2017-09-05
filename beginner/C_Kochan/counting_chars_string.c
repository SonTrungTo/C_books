/**
*   It is tedious to keep remembering the size of each char array.
* Hence, this is the method to count the size with '\0'(null character).
*/
#include <stdio.h>

int stringLength(const char string[]) {
  int count = 0;

  while (string[count]) // Use the fact that '\0' == 0 and other chars are not 0
    ++count;

  return count;
}

int main(void) {
  int         stringLength(const char string[]);
  const char  word1[] = {'K','o','y','o','m','i','\0'};
  const char  word2[] = {'1','+','1','\0'};
  const char  word3[] = {'F','I','\0'};
  const char  word4[] = "\033\"Hello\"\n";

  printf("%i  %i  %i  %i", stringLength(word1), stringLength(word2),
stringLength(word3), stringLength(word4));

  return 0;
}
