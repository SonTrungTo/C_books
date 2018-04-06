/* Testing Goldbach conjecture. */
#include <stdio.h>


#define START   700
#define FINISH  1100

int   is_prime(int);
void  prn_number(int, int);

int main(void) {
  prn_number(START, FINISH);
  return 0;
}

void prn_number(int start, int finish) {
  int n, i = 2, j = 2;

  if (start % 2 != 0)
    start += 1;

  printf("\n:::::   GOLDBACH CONJECTURE   :::::\n");
  printf("Every even number greater than two is the sum of two primes.\n\n");
  for (n = start; n <= finish; n += 2) {
    for (i = 2; i + j != n; i++) {
      if ( !is_prime(i) )
        continue;

      for (j = 2; i + j <= n; ) {
        if (n != (i + j) || !is_prime(j) )
          ++j;
        else
          break;
        }

      if (i + j == n)
        break;
    }

    printf("%6i %4s %6i %4s %6i\n", n, "=", i,"+", j);
  }
}

int is_prime(int n) {
  int k;

  for (k = 2; k <= n - 1; k++)
    if (n % k == 0)
      return 0;
  return 1;
}
