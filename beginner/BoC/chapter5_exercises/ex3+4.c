/* 7 gets printed!. */
#include <stdio.h>

int z;

void f(x)     /* Traditional C style */
int x;
{
  x = 2;
  z += x;
}

int main(void) {
  z = 5;
  f(z);
  printf("z = %d\n", z);

  return 0;
}
