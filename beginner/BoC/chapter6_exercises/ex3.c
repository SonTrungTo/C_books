#include <stdio.h>
#include <stddef.h>

int main(void) {
  int         a, b, *p = &a, *q = &b;
  ptrdiff_t   diff = p - q;

  printf("diff = %ld\n", diff);

  diff = p - (int *) 0; // (ptrdiff_t *) will cause error because of different ptr type.
  printf("diff = %ld\n", diff);

  return 0;
}
