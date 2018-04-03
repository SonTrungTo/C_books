/* Calculate e using the definition - computationally inefficient.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
  double   x0, x1 = 2;
  int      cnt = 1;

  printf("%4s%35s\n",
        "Cnt", "e");
  do {
    ++cnt;
    x0 = x1;
    x1 = pow((1 + (double) 1 / cnt), cnt);
  } while(x0 != x1);

  printf("%3d%50.41lf\n", cnt, x1);

  return 0;
}
