/**
*   It is tedious to keep remembering the size of each char array.
* Hence, this is the method to count the size with '\0'(null character).
*/
#include <stdio.h>

int stringLength(const char string[]) {
  int count = 0;

  while (string[count] != '\0')
    ++count;

  return count;
}

int main(void) {
  int         stringLength(const char string[]);
  const char  word1[] = {'K','o','y','o','m','i','\0'};
  const char  word2[] = {'1','+','1','\0'};
  const char  word3[] = {'F','I','\0'};

  printf("%i  %i  %i", stringLength(word1), stringLength(word2),
stringLength(word3));

  return 0;
}
