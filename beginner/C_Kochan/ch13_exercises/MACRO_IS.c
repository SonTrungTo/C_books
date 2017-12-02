// Exercise 7: IS_ALPHABETIC gives a nonzero value if a character is an alphabetic character.
// Exercise 8: IS_DIGIT and IS_SPECIAL. The point here is to use method of elimination.
#include <stdio.h>
#include <stdbool.h>
#define printName(name)  printf(#name" = %i\n", name)
#define IS_LOWER_CASE(c) ( (c) >= 'a' && (c) <= 'z' )
#define IS_UPPER_CASE(C) ( (C) >= 'A' && (C) <= 'Z' )
#define IS_ALPHABETIC(a) ( IS_LOWER_CASE(a) == IS_UPPER_CASE(a) ? 0 : 1)
#define IS_DIGIT(d)      ( (d) >= '0' && (d) <= '9' )
#define IS_SPECIAL(s)    ( IS_ALPHABETIC(s) == IS_DIGIT(s) ? 1 : 0 )

// readLine is integrated from exercise 9, ch11.
void readLine(char *buffer) {
  do
    *buffer = getchar();
  while(*buffer++ != '\n');

  *(buffer - 1) = '\0';
}

int main(void) {
  void readLine(char *buffer);
  char text[81], words[900];
  bool endOfText = false;
  int  i = 0, j;

  printf("Type in your text.\n");
  printf("After finish, press RETURN key.\n\n");

  while (!endOfText) {
    readLine(text);

    if (text[0] == '\0')
      endOfText = true;
    else {
      while (text[j]) {
        words[i] = text[j];
        ++j;
        ++i;
      }
      j = 0;
    }
  }

  for (int l = 0; l <= i; l++) {
    printf("l = %c; ", words[l]);
    printName(IS_ALPHABETIC(words[l]));
    printName(IS_DIGIT(words[l]));
    printName(IS_SPECIAL(words[l]));
    printf("\n");
  }

  return 0;
}
