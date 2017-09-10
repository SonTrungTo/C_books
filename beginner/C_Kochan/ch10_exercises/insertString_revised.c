/**
*   insertString(text, "per", 10);
* where text[] = "the wrong son" should produce "the wrong person".
* The approach: Instead of concat strings as the old version did (which caused
* stack smashing!), let's try to move the "end" string and leave the space
* for "per".
*
* OOPS! Still have stack smashing! .... I GIVE UP!
*/
#include <stdio.h>

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

int main(void) {
  char  text[] = "the wrong son";
  void  insertString(char source[], char str[], int position);

  insertString(text,"per",10);
  printf("%s\n", text);

  return 0;
}
