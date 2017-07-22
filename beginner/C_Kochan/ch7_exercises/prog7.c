// Sieve of Erastosthenes
/* This algorithm is slightly less efficient than
   the one we used in textbook in the senses that:
    - Multiples of 2 is immediately not considered to be prime.(the same)
    - In a sense, we don't need to consider the j (when multiples of 2 is deleted!)
    such that j*i < i*i = i^2 as this algorithm is doing, as j is
    an already realized prime number:
    we only need to see if i^2 <= n.
*/
#include <stdio.h>

int main(void) {
  int       n, i, j;

  printf("How many prime numbers do you want? ");
  scanf("%i", &n);
  printf("\nPrimes are: ");

  unsigned long long int P[n+1];

  // Initializing all elements of P.
  for (i = 0; i < n + 1; i++)
    P[i] = 0;

  for (i = 2; i <= n; i++) {
    if (P[i] == 0)
      printf("%i ", i);

    for (j = 1; i*j <= n; j++) // Substitute 1 for i for a more efficient algorithm.
      P[i*j] = 1;
  }

  return 0;
}
