/* Run-time error */
#include <stdio.h>

int main(void) {
  int x, y = 0;

  x = 1 / 0;
  printf("x = %d\n", x);

  return 0;
}

// Substitute 0 with y, only run-time error.
// Otherwise, the compiler only complains.
