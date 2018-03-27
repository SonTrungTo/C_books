/* Arithmetic overflow */
#include <stdio.h>

int main(void) {
  unsigned   big_big = 2000000000 + 2000000000; /* The same as int; the compiler still gives warning */

  printf("%d     %u\n", big_big, big_big);

  return 0;
}
