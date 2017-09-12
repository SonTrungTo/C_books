/**
*   uppercase(char []);
* converts all lowercase characters into their uppercase equivalents.
*/
#include <stdio.h>

void uppercase(char string[]) {
  char uppercaseLetter;
  int  i = 0;

  while (string[i]) {
    if (string[i] >= 'a' && string[i] <= 'z') {
      uppercaseLetter = string[i] - 'a' + 'A';
      string[i] = uppercaseLetter;
    }
    ++i;
  }
}

int main(void) {
  void uppercase(char string[]);
  char text[] = "Anna, I don't care about you. I care about \
my math.\nDon't send me any fucking stupid emails from you.";

  uppercase(text);
  printf("%s\n", text);

  return 0;
}
