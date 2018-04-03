/* Labels have their own name space in ANSI-C */
#include <stdio.h>

int main(void) {
  int   L = -3;                         /* L is a variable */
  if (L < 0)
    goto L;
  printf("L = %d\n", L);
  L: printf("Exiting label test!\n");   /* L is a label */
  return 0;
}
