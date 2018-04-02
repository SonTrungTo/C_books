/* Different combinations of statements. */
#include <stdio.h>

int main(void) {
  int   i;
  /* Combination I */
  if (i == 1)
    printf("Execute st1.\n");
  else if (i == 2)
    printf("Execute st2.\n");
  else
    printf("Execute st3.\n");

  /* Combination II */
  if (i == 1)
    printf("Execute st2.\n");
  else if (i == 2)
    printf("Execute st1, st3.\n");
  else
    printf("Execute st1.\n");

  /* Combination III */
  if (i == 1 || i == 2) {
    printf("Execute st1, st2.\n");
  } else if (i == 3) {
    printf("Execute st2, st3.\n");
  }

  return 0;
}
