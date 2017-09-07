/**
*   This program uses 3 functions: readLine, countWords and alphabetic
* to count the words within a piece of text.
*/
#include <stdio.h>
#include <stdbool.h>

//--- Reusing of 3 functions
void readLine(char buffer[]) {
  char  character;
  int   i = 0;

  do {
    character = getchar();
    buffer[i] = character;
    ++i;
  } while(character != '\n');

  buffer[i - 1] = '\0';
}

bool alphabetic(const char c) {
  if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || c == '\'')
    return true;
  else
    return false;
}

int countWords(const char string[]) {
  bool    lookingForWord = true, alphabetic(const char c);
  int     i, wordCount = 0;

  for (i = 0; string[i] != '\0'; i++)
    if ( alphabetic(string[i]) )
    {
      if (lookingForWord)
      {
        ++wordCount;
        lookingForWord = false;
      }
    }
    else
      lookingForWord = true;

  return wordCount;
}
//--- End of reusing.

int main(void) {
  void    readLine(char buffer[]);
  int     totalWords = 0, countWords(const char string[]);
  char    text[81];
  bool    endOfText = false;

  printf("Type in your text.\n");
  printf("When you are done, press 'RETURN'.\n\n");

  while (!endOfText) {
    readLine(text);

    if (text[0] == '\0')
      endOfText = true;
    else
      totalWords += countWords(text);
  }

  printf("\nThe total number of words for the text above is %i.\n",
totalWords);

  return 0;
}
