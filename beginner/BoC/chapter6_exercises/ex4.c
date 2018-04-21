#include <stdio.h>

int main(void) {
  int    i = 1, j = 2, *p = &i, *q = &j;

  printf("*q = %d\n", *q = &j);

  return 0;
}

// Problems:      i = (*&) j invalid expression
//                q = &p ptr to ptr
//               *q = &j  *q is an interger, not a ptr.
