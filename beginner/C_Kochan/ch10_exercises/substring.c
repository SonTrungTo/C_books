/**
*   substring(source,start,count,result);
* Extract elements from a particular string.
* source := the character string from which you are extracting the substring.
* start := index number into source indicating the first character of the substring.
* count := the number of characters to be extracted from the source string.
* result := array that contains the substring.
*/
#include <stdio.h>

void substring(const char source[], int index, int count,
                    char result[]) {
  int    i, j = 0, numberOfElementsLeft;

  while ( source[j] ) // null value is false!
    ++j;

  j -= 1; // This is the index value of the final non-null element in source.
  numberOfElementsLeft = j - index + 1;

  if(count <= numberOfElementsLeft && count != 0)
    for (i = 0; i < count; i++)
      result[i] = source[i + index];
  else
    for (i = 0; i < numberOfElementsLeft; i++)
      result[i] = source[i + index];

  result[i] = '\0';
}

int main(void) {
  const char str1[] = "character";
  const char str2[] = "two words";
  char result[81];
  void substring(const char source[], int index, int count,
                      char result[]);

  substring("character",4,3,result);
  printf("%s\n", result);

  substring("two words",4,20,result);
  printf("%s\n", result);

  substring("character",0,4,result);
  printf("%s\n", result);

  return 0;
}
