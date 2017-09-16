// Example 11.13 + 11.4: Program to write copyString using pointers.
// , with pre/post increments/decrements understood.
#include <stdio.h>

void copyString(char *to, char *from) {
  while (*from)
    *to++ = *from++;

  *to = '\0';
}

int main(void) {
  void   copyString(char *to, char *from);
  char   string[] = "Star Wars series are my favorite movies";
  char   string2[81];

  copyString(string2,string);
  printf("%s\n", string2);

  copyString(string2,"Too bad I don't have time.");
  printf("%s\n", string2);

  return 0;
}
