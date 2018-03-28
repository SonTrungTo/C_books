/* two's complement representation */
#include <stdio.h>

int main(void) {
  char          c = -1;
  signed char   s = -1;
  unsigned char u = -1;

  printf("c = %d    s = %d    u = %d\n", c, s, u); /* char == signed char */
  u = c;      /* Interger Promotion */
  printf("u = %d\n", u);

  return 0;
}
