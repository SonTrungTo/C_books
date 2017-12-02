// Exercise 9: Compute absolute value of its argument
#include <stdio.h>
#define printName(name)   printf(#name " = %g\n", name)
#define ABSOLUTE_VALUE(x) ( (x) < 0 ? -(x) : (x) )

int main(void) {
  printName(ABSOLUTE_VALUE( 1+(5*2-10)-(float)12/8 ));
  printName(ABSOLUTE_VALUE( (float) 1+2+3+4+5+6*(-5) ));
  return 0;
}
