// Experimental const type qualifier
#include <stdio.h>

int main(void) {
  const int   a = 0;

  a = 333;          // Error: Assignment of read-only variable 'a'
  printf("%d\n", a);

  return 0;
}
