/* "The universe is ending!" - 17 times */
#include <stdio.h>

static int i = 0;

int main(void) {
  printf(" The universe is never ending!%i ", i);
  if ( i++ < 16)
    main();
  return 0;
}
