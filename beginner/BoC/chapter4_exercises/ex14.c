/* putchar(c) returns the int value of the character it writes */
#include <stdio.h>

int main(void) {
  int i = 0;

  for (putchar('1'); putchar('2') && i < 10; putchar('3')) {
    putchar('4'); /* 12432432432432... */
    ++i;
  }

  return 0;
}
