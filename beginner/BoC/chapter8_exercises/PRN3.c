#include <stdio.h>

#define PRN3(x, y, z)  printf("x has the value "#x" and y has the value "#y" and z has the value "#z"\n")

int main(void) {
  PRN3(1.1, 2.2, 3.3);
  return 0;
}
