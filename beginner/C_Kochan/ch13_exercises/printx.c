// Exercise 10: Testing macro definition of printx.
#include <stdio.h>
#define printint(n)     printf("%i\n", x##n)
#define printx(i)       printint(i)

int main(void) {
  int x1=1,x2=2,x3=3,x4=4,x5=5,x6=6,x7=7,x8=8,x9=9,x10=10;

  // for (int i = 1; i <= 10; i++) {
  //   printx(i);
  // }
  // NOTE: printx(i) is NOT a function! i is not evaluated and therefore is directly
  // substituted into printint, creating the undefined xi !
  printx(1);
  printx(2);
  printx(3);
  printx(4);
  printx(5);
  printx(6);

  return 0;
}
