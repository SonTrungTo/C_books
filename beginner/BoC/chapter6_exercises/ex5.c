#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char      a, b, c, *p, *q, *r;

  printf("%20p%20p%20p%10lu\n", &a, &b, &c, sizeof(&a));
  return 0;
}
// Indeed contiguous!
