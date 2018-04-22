#include <stdio.h>
#include <assert.h>

#define   N   5     // N is the max degree
#define   X   0.5

int     mul_cnt = 0;
int     add_cnt = 0;
double  p[N + 1];
double  eval(double p[], double x, int n);    // n is max degree

int main(void) {
  int    i;
  double val;

  for (i = 0; i < N + 1; i++) {
    printf("p[%d] = ", i);
    scanf("%lf", &p[i]);
  }
  assert(p[N] != 0);
  val = eval(p, X, N);
  printf("f(%lf) = %lf\n", X, val);
  val = eval(p, 0.6, N);
  printf("f(%lf) = %lf\n", 0.6, val);

  return 0;
}

double eval(double p[], double x, int n) {
  static int i = 0;

  if (i == n) {
    i = 0;
    return *(p + i);
  }
  else {
    ++mul_cnt;
    ++add_cnt;
    return  (*(p + i++) + x * (eval(p, x, n)));
  }
}
