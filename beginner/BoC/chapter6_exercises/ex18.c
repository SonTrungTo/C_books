#include <stdio.h>
#include <string.h>

int main(void) {
  char a[] = "abcdefghijklmnopqrstuvwxyz";
  char *p = a;
  char *q = a + strlen(a) - 3;

  printf("a = %s\n", a);
  strcpy(p, q);         // stack smashing if interchanged!
  printf("a = %s\n", a);

  return 0;
}
