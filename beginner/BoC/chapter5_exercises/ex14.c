/* Factor all the numbers desired. */
#include <stdio.h>

#define START   2
#define FINISH  100

int   is_prime(int);
void  factor(int n0, int n1);

int main(void) {
  factor(START, FINISH);
  return 0;
}

void factor(int n0, int n1) {
  int k, factor, n;

  for (n = n0; n <= n1; n++)
    if ( is_prime(n) )
      printf("%6d%4s%6d\n", n,"=",n);
    else {
      printf("%6d%4s", n, "=");
      for (k = 2, factor = n; k < n; k++)
          while (factor % k == 0 && is_prime(k)) {
            factor /= k;
            printf("%6d%4s", k, "*");
          }
      printf("\b \n");
    }
}

int is_prime(int n) {
  int k;

  for (k = 2; k <= n - 1; k++)
    if (n % k == 0)
      return 0;
  return 1;
}
