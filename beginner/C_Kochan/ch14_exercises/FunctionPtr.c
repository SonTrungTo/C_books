// Exercise 1: FunctionPtr acts as type of a pointer to a function that returns an int
// and takes no arguments.
#include <stdio.h>

int exampleFunc(void) {
  return 0;
}

int main(void) {
  int         exampleFunc(void);
  typedef int (*FunctionPtr)(void);
  FunctionPtr function1 = exampleFunc;

  printf("%i is the score of any terrible Vietnamese student.\n", function1());

  return 0;
}
