// const char *p := pointer to const character!
#include <stdio.h>

int main(void) {
  char        s[] = "abc";
  const char  *p = s;

  *p = 'A';
  printf("%s\n", p); // Complained!

  return 0;
}
