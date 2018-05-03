/*
// Is English understandable without vowels?
*/
#include <stdio.h>

int is_vowel(char c);

int main(void) {
  char c;

  while ((c = getchar()) != EOF)
    if (!is_vowel(c))
      putchar(c);

  return 0;
}

int is_vowel(char c) {
  c = c + 'A' - 'a'; // Convert to uppercase

  if (c == 'A' || c == 'E' || c == 'I' ||
c == 'O' || c == 'U')
    return 1;
  else
    return 0;
}
