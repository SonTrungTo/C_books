/* Printing the largest integral value */
#include <stdio.h>

int main(void) {
  unsigned long   val = -1; /* This is integral promotion: signed (all bits turned on) -> unsigned */

  printf("The biggest integer value: %lu\n", val); /* 2^{64} - 1 == sizeof(unsigned long) == 8 bytes */

  return 0;
}
