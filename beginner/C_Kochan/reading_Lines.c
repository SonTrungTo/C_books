/**
*   Reading lines of data FROM THE TERMINAL using getchar() (SIMILAR TO scanf("%c",&char);)
* Note that 80 characters per line
* is considered a line length for standard terminal. (Similar to what gets does!)
*
*   Note: It is a good idea to extend readLine(char buffer[]) to accept as a second
* argument the size of buffer to avoid overflowing the buffer.
*/
#include <stdio.h>

int main(void) {
  int    i;
  char   line[81];
  void   readLine(char buffer[]);

  for (i = 0; i < 3; i++) {
    readLine(line);
    printf("%s\n\n", line);
  }

  return 0;
}

// Function to read a line of text from the terminal.

void readLine(char buffer[]) {
  char  character;
  int   i = 0;

  do {
    character = getchar();
    buffer[i] = character;
    ++i;
  } while(character != '\n');

  buffer[i - 1] = '\0'; // This is to substitute '\n' by '\0'.
}
