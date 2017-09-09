/**
*   removeString(source, start, number of characters to remove);
*/
#include <stdio.h>

void removeString(char source[], int start, int nChars) {
  int   i, j, nextCharNumber, index = 0;
  char  result[81];

  while ( source[index] )
    ++index;

  index -= 1; // the index of the last non-null in source[];
  nextCharNumber = start + nChars;

  // Copying all elements AFTER those have been deleted into the result array.
  if(nChars <= index - nChars + 1 && nChars != 0) {
    for (j = 0; source[nextCharNumber + j] ; j++)
      result[j] = source[nextCharNumber + j];
    // Pasting upon those that are to be deleted.
    for (i = 0; i < j; i++)
      source[start + i] = result[i];

    source[start + i] = '\0';
  }
  else
    source[start] = '\0'; // Account for removeString(word3,4,100);
}

int main(void) {
  char  word1[] = "the wrong son";
  char  word2[] = "This is a hard/easy math problem.";
  char  word3[] = "Megaman X4";
  void  removeString(char source[], int start, int nChars);

  removeString(word1,4,6);
  printf("%s\n", word1);
  removeString(word2,14,5);
  printf("%s\n", word2);
  removeString(word3,7,100);
  printf("%s\n", word3);

  return 0;
}
