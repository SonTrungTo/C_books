/* Read from the standard input files and write twice to standard output file. */
#include <stdio.h>

int main(void) {
  char c;

  while (scanf("%c", &c) == 1) {
    printf("%c", c);
    printf("%c", c);
  }

  return 0;
}
