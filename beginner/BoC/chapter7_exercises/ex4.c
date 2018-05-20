#include <stdio.h>

int main(void) {
  int       i = -1;
  unsigned  u = -1;

  /* Right shift of unsigned always shifts in 0s. of signed: some 0 and some sign bit. */
  if (i >> 1 == u >> 1)
    printf("Zeroes are shifted in.\n");
  else
    printf("Sign bits are shifted in.\n");

  return 0;
}
