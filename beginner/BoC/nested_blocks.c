/* Testing nested_blocks */
#include <stdio.h>

int main(void) {
  int   a = 1, b = 2, c = 3;
  printf("%3d%3d%3d\n", a, b, c);
  {
    int     b = 4;
    float   c = 5.0;
    printf("%3d%3d%5.1f\n", a, b, c);
    a = b;
    {
      int   c;
      c = b;
      printf("%3d%3d%3d\n", a, b, c);
    }
    printf("%3d%3d%5.1f\n", a, b, c);
  }
  printf("%3d%3d%3d\n", a, b, c);

  return 0;
}
