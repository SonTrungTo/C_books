/* Print out a list of powers of 2 in decimal, hexadecimal and octal */
#include <stdio.h>

int main(void) {
  int   i, val = 1;

  for (i = 1; i < 35; i++) {
    printf("%15d%15u%15x%15o\n", val, val, val, val);
    val *= 2;
  }
  return 0;
}
