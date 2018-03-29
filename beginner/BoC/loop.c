/* A test that fails (equality expression is not robust) */
#include <stdio.h>

int main(void) {
  int       cnt = 0;
  double    sum = 0.0, x;

  for (x = 0.0; x != 9.9; x += 0.1) {   /* trouble */
    sum += x;
    printf("cnt = %5d\n", ++cnt);
  }
  printf("sum = %lf\n", sum);

  return 0;
}
/* To understand why this is so, one needs knowledge in floating-point arithmetic */
