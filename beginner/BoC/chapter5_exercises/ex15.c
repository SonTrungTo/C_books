/* Practice on understanding scope of identifiers */
#include <stdio.h>

int main(void) {
  int   a = 1, b = 2, c = 3;

  a += b += ++c;
  printf("%5d%5d%5d\n", a, b, c);
  {
    float b = 4.0;
    int   c;

    a += c = 5 * b;
    printf("%5d%5.1f%5d\n", a, b, c); /* Note we have integral DEmotion */
  }
  printf("%5d%5d%5d\n", a, b, c);

  return 0;
}
