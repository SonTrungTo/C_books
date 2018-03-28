/* Check to see if this compiler follows ANSI C elimination of long float (== double).
*/
#include <stdio.h>

int main(void) {
  printf("sizeof(long float) = %lu\n", sizeof(long float)); /* -> compiler-error */

  return 0;
}
