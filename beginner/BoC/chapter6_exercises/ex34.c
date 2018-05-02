// Echo modified!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *toUpperCase(char const *s);

int main(int argc, char const *argv[]) {
  int   i;

  printf("argc = %d\n", argc);
  printf("USAGE: [COMMAND] [-c] [ARGUMENTS]\n");

  if (strcmp(argv[1], "-c") == 0)
    for (i = 2; i < argc; i++) {
      printf("argv[%d] = %s\n", i, toUpperCase(argv[i]));
    }
  else
    for (i = 1; i < argc; i++) {
      printf("argv[%d] = %s\n", i, argv[i]);
    }

  return 0;
}

char *toUpperCase(char const *s) {
  int   size, i = 0;
  char  *c;

  size = sizeof(s) / sizeof(char);
  c = malloc(size);
  while (*(s + i)) {
    if (*(s + i) >= 'a' && *(s + i) <= 'z')
      *(c + i) = *(s + i) + 'A' - 'a';
    else
      *(c + i) = *(s + i);
    ++i;
  }
  *(c + i) = '\0';

  return c;
}
