#include <stdio.h>

int main(int argc, char const **argv) {
  while (*argv != NULL)
    printf("%s ", *argv++);
  putchar('\n');
  return 0;
}
