#include <stdio.h>
#include <math.h>

int is_prime(int p);

int main(void) {
  int  n, result = 1, N;
  int  power = 1;

  printf("\nEnter your limit: ");
  scanf("%i", &N);

  for (n = 2; n <= N; n++)
    if (is_prime(n)) {
      while (pow(n, power) <= N)
        ++power;
      result *= (int) pow(n, --power);
      power = 1;
    }

  printf("The smallest number that is evenly divisble from 1 to "
         "%i is %i. \n\n", N, result);

}

int is_prime(int p) {

  if (p != 2 && p % 2 == 0)
    return 0;

  for (int i = 3; i < p && p != 2 ; i += 2)
    if (p % i == 0)
      return 0;

  return 1;
}
