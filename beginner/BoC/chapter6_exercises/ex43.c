#include <stdio.h>
#include <string.h>

int main(void) {
  char *p1 = "abc", *p2 = "pacific sea";

  printf("%s         %s           %s\n", p1, p2, strcat(p1, p2));
  /*
  // Explanation: Compiler computes all arguments before input them into
  // constant string!
  */
  return 0;
}
