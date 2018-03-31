/* while with 'do' (C does not want do)*/
#include <stdio.h>

#define     LIMIT     5

int main(void) {
  int   i = 0, j;

  while (++i < LIMIT) {
    j = 2 * i + 3;
    printf("j = %d\n", j);
  }

  return 0;
}
