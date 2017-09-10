/**
*   replaceString(source,s1,s2);
* Function replace s1 in source with s2.
*/
#include <stdio.h>
#include <stdbool.h>

int findString(const char source[], const char search[]) {
  int i = 0, j = 0;

  while (search[0] != source[j] && source[j + 1] && source[0])
    ++j;

  do {
    if (search[i] != source[j + i])
      return -1;
    if ( search[i] )
      ++i;
  } while(search[i] != '\0');

  return j;
}

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

int stringLength(char string[]) {
  int    i = 0;

  while (string[i])
    ++i;

  return i;
}

void insertString(char source[], char str[], int position) {
  int  i, strLength, sourceLength;
  int  stringLength(char string[]);

  sourceLength = stringLength(source);
  strLength    = stringLength(str);

  // First, move the "end" string to the end of the string.
  for (i = sourceLength; i >= position; i--)
    source[strLength + i] = source[i];
  // Now we have the space for str, let's put it on source!
  for (i = 0; i < strLength; i++)
    source[position + i] = str[i];

}

// We now write replaceString
bool replaceString(char source[], char s1[], char s2[]) {
  void insertString(char source[], char str[], int position);
  void removeString(char source[], int start, int nChars);
  int  findString(const char source[], const char search[]), start, nChars;

  start  = findString(source,s1);
  nChars = stringLength(s1);
  if (start != -1) {
    removeString(source,start,nChars);
    insertString(source,s2,start);
    return true;
  }
  else
    return false;
}

int main(void) {
  bool replaceString(char source[], char s1[], char s2[]), stillFound;
  char text[] = "The chosen one the boy may be.";

  do {
    stillFound = replaceString(text,"o","0");
  } while(stillFound == true);

  printf("%s\n", text);

  return 0;
}
