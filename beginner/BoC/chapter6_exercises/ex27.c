/*
// In ANSI C, pointers pointing to the same content have the same address.
// Traditional C, they have different one.
*/
#include <stdio.h>

int main(void) {
  char *p = "abc", *q = "abc";

  if (p == q) {
    printf("The two strings have the same address!\n");
  } else {
    printf("As expected, the addresses are different.\n");
  }

  return 0;
}
