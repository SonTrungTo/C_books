// Exercise 9: readLine reads a line of text from the terminal.
#include <stdio.h>

void readLine(char *buffer) {
  do
    *buffer = getchar();
  while(*buffer++ != '\n');

  *buffer = '\0';
}

int main(void) {
  void readLine(char *buffer);
  char lines[81];
  int  i;

  for (i = 0; i < 3; i++) {
    readLine(lines);
    printf("%s\n", lines);
  }

  return 0;
}
