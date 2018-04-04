#include <stdio.h>
#include <stdlib.h>

double power(double x, int n);

int main(void) {
  double x;
  int    n;

  printf("x^n. Enter x and n:  ");
  scanf("%lf%d", &x, &n);
  printf("\npower(%lf,%d) = %lf\n", x, n, power(x,n));

  return 0;
}

double power(double x, int n) {
  if (n < 0) {
    printf("ERROR: bad power!\n");
    exit(1);
  }

  if (n == 0)
    return 1;
  else
    return (x * power(x, n - 1));
}
