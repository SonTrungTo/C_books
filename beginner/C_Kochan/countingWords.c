/**
*   This program counts the words of an arbitrary constant character string.
*/
#include <stdio.h>

int main(void) {
  const char text1[] = "Well, here goes.";
  const char text2[] = "Finland is a great ... place to !?(/ kuksiminen";
  int        countWords(const char string[]);

  printf("%s -> words = %i\n", text1, countWords(text1));
  printf("%s -> words = %i\n", text2, countWords(text2));

  return 0;
}

/* Function to count number of words */

int countWords(const char string[]) {
  int       i, wordCount = 0;
  _Bool     lookingForWord = 1, alphabetic(const char c);

  for (i = 0; string[i] != '\0'; i++)
    if ( alphabetic(string[i]) )
    {
      if (lookingForWord) {
        ++wordCount;
        lookingForWord = 0;
      }
    }
    else
      lookingForWord = 1;

  return wordCount;
}

// Function to ascertain if a character is alphabetic.

_Bool alphabetic(const char c) {
  _Bool    isAlphabeticFlag;

  if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    isAlphabeticFlag = 1;
  else
    isAlphabeticFlag = 0;

  return isAlphabeticFlag;
}
