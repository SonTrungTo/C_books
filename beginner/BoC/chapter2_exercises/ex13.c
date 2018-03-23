/*
*   Printing 2^n backwards using for loop
*/
#include <stdio.h>

int main(void) {
  int    power = 2048;

  for (; (power /= 2) > 0;) {
    printf("%-6i", power);
  }

  return 0;
}
