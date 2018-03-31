/* Infinite loop? NO. Because i * j >= 0 eventually and short-circuit evaluation */
#include <stdio.h>

int main(void) {
  int    i, j;

  printf("Input two integers:   ");
  scanf("%d%d", &i, &j);
  while (i * j < 0 && ++i != 7 && j++ != 9) {
    printf("I am the darkness!\n");
  }
  while (--i) {
    printf("I am system-dependent\n"); /* Infinite loop! */
  }

  return 0;
}
