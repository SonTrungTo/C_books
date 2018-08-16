#include <stdio.h>
#include <ctype.h>

int lower(int c);

int main(void) {
  int    c = 'S';

  printf("%c\n", lower(c)); /* Expect: s */
  return 0;
}

int lower(int c) {
  return (isupper(c) ? c + 'a' - 'A' : c);
}
