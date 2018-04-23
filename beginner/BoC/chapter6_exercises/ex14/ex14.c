/* f = g * h */
#include "add.h"

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

  multiply(f, g, h, N);

  printf("The sum is: \n");
  for (int i = 0; i < N + N + 1; i++)
    printf("f[%d] = %lf\n", i, *(f + i));

  return 0;
}
