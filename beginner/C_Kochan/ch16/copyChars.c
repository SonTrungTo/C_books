// Example 16.2: Copying characters from Standard Input to Standard Output
// Program to echo characters until an end of file
#include <stdio.h>

int main(void) {
  int c; // This is correct: because EOF must be unique, getchar() == EOF (int)

  while (( c = getchar() ) != EOF)
    putchar(c);

  return 0;
}
