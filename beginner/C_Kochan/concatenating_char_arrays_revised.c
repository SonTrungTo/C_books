/**
*   This program improves upon the original concat (concatenating_char_arrays.c)
* by removing the number-of-chars args(i.e, n1, n2) and using the two features of
* C: initilization of const char string and its display.
* The key is the null character, '\0'.
*/
#include <stdio.h>

int main(void) {
  const char s1[] = "Test ";
  const char s2[] = "works!";
  char       s3[20];
  void       concat(char result[], const char str1[], const char str2[]);

  concat(s3,s1,s2);

  printf("%s\n", s3);

  return 0;
}

void concat(char result[], const char str1[], const char str2[]) {
  int i, j;

  for (i = 0; str1[i] != '\0'; i++)
    result[i] = str1[i];

  for (j = 0; str2[j] != '\0'; j++)
    result[i + j] = str2[j];

  result[i + j] = '\0';
}
