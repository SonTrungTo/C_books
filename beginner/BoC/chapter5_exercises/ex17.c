#include <stdio.h>

int factorial(int n) {
  if (n == 0 || n == 1)        /* wrong! */
    return  1;
  else
    return  (n * factorial(--n));
}

int main(void) {
  printf("%d\n", factorial(3)); /* factorial(3) = 2 * factorial(2) = 2 * 1 * factorial(1) = 2 */
  return 0;
}
