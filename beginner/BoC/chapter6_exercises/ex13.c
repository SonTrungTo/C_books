/* f = g + h;  n is the max degree of f, g, and h */
#include <stdio.h>

#define     N     5     // the highest degree

double  g[N + 1], h[N + 1], f[N + 1];

void add(double f[], double g[], double h[], int n);

int main(void) {
  printf("Enter coefficients for g.\n");
  for (int i = 0; i < N + 1; i++) {
    printf("g[%d] = ", i);
    scanf("%lf", g + i);
  }
  printf("Enter coefficients for h.\n");
  for (int i = 0; i < N + 1; i++) {
    printf("h[%d] = ", i);
    scanf("%lf", h + i);
  }
  add(f, g, h, N);
  printf("The sum is: \n");
  for (int i = 0; i < N + 1; i++)
    printf("f[%d] = %lf\n", i, *(f + i));

  return 0;
}

void add(double f[], double g[], double h[], int n) {
  for (int i = 0; i < n + 1; i++)
    *f++ = *g++ + *h++;
}
