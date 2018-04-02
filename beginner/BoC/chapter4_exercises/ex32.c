/* Testing the effect of a for loop */
/* 12432432432... */
#include <stdio.h>

int main(void) {
  int    n = 20;

  for ( putchar('1'); putchar('2') && n > 0; putchar('3') ) {
    putchar('4');
    --n;
    continue;
    putchar('5');
  }

  return 0;
}
