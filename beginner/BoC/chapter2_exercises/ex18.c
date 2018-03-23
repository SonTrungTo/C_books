/*
*   Program fixed!
*/
#include <stdio.h>

int main(void) {
  float   x, y, z;

  printf("gimme 3: ");
  scanf("%f%f%f", &x, &y, &z);
  printf("average is %f\n", ( x + y + z) / 3);

  return 0;
}
