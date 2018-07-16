#include <stdio.h>

#define   forever(x)    forever(forever(x))

int main(void) {
  printf("%i\n", forever(1));
  return 0;
}
