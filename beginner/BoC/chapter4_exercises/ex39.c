/* Algorithm to compute e efficiently */
#include <stdio.h>

int main(void) {
  double    x0, x1 = 1, factorial = 1;
  int       cnt = 0;

  printf("%4s%25s\n",
          "Cnt", "e");
  do {
    factorial *= ++cnt;
    x0 = x1;
    x1 += (1 / factorial);
  } while(x0 != x1);

  printf("%3d%50.41lf\n", cnt, x1);

  return 0;
}
