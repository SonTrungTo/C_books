/**
*   insertString(text,"string",position)
* Function to insert a string inside the text string at the designated position.
*/
#include <stdio.h>

// Let's reuse the concat from concatenating_char_arrays_revised.c
void concat(char result[], char str1[], char str2[]) {
  int i, j;

  for (i = 0; str1[i]; i++)
    result[i] = str1[i];

  for (j = 0; str2[j]; j++)
    result[j + i] = str2[j];

  result[j + i] = '\0';
}

// Also reuse the substring function from substring.c
void substring(char source[], int index, int count,
               char result[]) {
  int i, j = 0, numberOfElementsLeft;

  while ( source[j] )
    ++j;

  j -= 1;
  numberOfElementsLeft = j - index + 1;

  if (count <= numberOfElementsLeft && count)
    for (i = 0; i < count; i++)
      result[i] = source[index + i];
  else
    for (i = 0; i < numberOfElementsLeft; i++)
      result[i] = source[index + i];

  result[i] = '\0';
}

// Let's write insertString
void insertString(char source[], char str[], int position) {
  void concat(char result[], char str1[], char str2[]);
  void substring(char source[], int index, int count, char result[]);
  int  i;
  char result[50], result2[50], result3[50];

  substring(source,0,position,result);
  substring(source,position,81,result2);
  concat(result3,str,result2);
  concat(source,result,result3); /* This is not good because we are making stack smashing!
                        Probably because the C's memory cannot take much.              */
}

int main(void) {
  void insertString(char source[], char str[], int position);
  char text[] = "the wrong son";

  insertString(text,"per",10);

  printf("%s\n", text);

  return 0;
}
