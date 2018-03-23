/* Testing the codes */
#include <stdio.h>

int main(void) {
  int    a = 1, b = 2, c = 3;

  a += b += c += 7;
  printf("%i %i %i\n", a, b, c);

  return 0;
}
