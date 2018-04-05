#include <stdio.h>

double probability(void);

int main(void) {
  int     i, j;
  double  avg100 = 0, avg10000 = 0;

  for (i = 1; i <= 100; i++) {
    avg100 += ( probability() - avg100 ) / i;
  }

  for (j = 1; j <= 10000; j++) {
    avg10000 += ( probability() - avg10000 ) / j;
  }

  printf("avg100 = %22.15lf\n" "avg10000 = %22.15lf\n", avg100, avg10000);

  return 0;
}
