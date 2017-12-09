// Example to illustrate the use of external variables.
#include <stdio.h>

int i = 5;

int main(void) {
  void foo(void);

  printf("The original value is %i\n", i);

  foo();

  printf("After the use of external variables, the value is %i\n", i);

  return 0;
}
