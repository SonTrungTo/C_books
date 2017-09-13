/**
*   Example 11.2: Further example of pointers
*/
#include <stdio.h>

int main(void) {
  char  c = 'S';
  char  *char_pointer = &c;

  printf("%c  %c\n", c, *char_pointer);

  c = '\\';
  printf("%c  %c\n", c, *char_pointer);

  *char_pointer = ')';
  printf("%c  %c\n", c, *char_pointer);

  return 0;
}
