#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sqrt_4th(int k);

int main(void) {
  int    n;

  printf("Enter the number whose 4th_root needs to be calculated:   ");
  scanf("%d", &n);
  printf("\nsqrt_4th(%d) = %lf\n\n", n, sqrt_4th(n));
  return 0;
}

double sqrt_4th(int k) {
  if (k < 0) {
    printf("No negative values, please!\n");
    exit(1);
  }

  return sqrt(sqrt(k));
}
