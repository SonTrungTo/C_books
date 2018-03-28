/* Modular arithmetic, illustrated with unsigned */
#include <limits.h>     /* for UINT_MAX */
#include <stdio.h>

int main(void) {
  int        i;
  unsigned   u = UINT_MAX;

  for (i = 0; i < 10; i++)
    printf("%u + %d = %u\n", u, i, u + i);
  for (i = 0; i < 10; i++)
    printf("%u * %d = %u\n", u, i, u * i);

  return 0;
}
