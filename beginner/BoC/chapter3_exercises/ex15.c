/* Testing series of sizeof */
#include <stdio.h>

int main(void) {
  char   c = 'A';

  printf("sizeof(c)       = %lu\n", sizeof(c)); /* data type */
  printf("sizeof('A')     = %lu\n", sizeof('A')); /* character constants are integers */
  printf("sizeof(c + c)   = %lu\n", sizeof(c + c)); /* Integer promotions */
  printf("sizeof(c = 'A') = %lu\n", sizeof(c = 'A')); /* demotion */

  return 0;
}
