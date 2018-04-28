/*
// ANSI C does not allow the change of a string constant made by pointers.
// However, different compilers have different standard.
*/
#include <stdio.h>

int main(void) {
  char  *p = "abc";

  *p = 'X';
  printf("%s\n", p);    // Run-time error!

  return 0;
}
