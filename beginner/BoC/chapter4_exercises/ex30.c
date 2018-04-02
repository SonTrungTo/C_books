/* while vs goto + if: while is better, of course! */
#include <stdio.h>

int main(void) {
  int   i = 5;

  while (i-- > 0)
    printf("I am invincible.\n"); /* This is a natural expression. */

    printf("\n\n\n");
    i = 5;

  next: if (i-- > 0) {            /* This is an easier explanation. */
    printf("I am invincible.\n");
    goto next;
  }

  return 0;
}
