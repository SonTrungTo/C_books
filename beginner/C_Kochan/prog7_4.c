#include <stdio.h>
#include <stdbool.h>

// Modified program to generate prime numbers

int main(void) {
  int      n, i, primes[50], primeIndex = 2;
  bool     isPrime;

  primes[0] = 2;
  primes[1] = 3;

  for (n = 5; n <= 50; n += 2) {
    isPrime = true;

    for (i = 1; isPrime && n / primes[i] >= primes[i]; i++)
      if (n % primes[i] == 0)
        isPrime = false;

    if (isPrime){
      primes[primeIndex] = n;
      ++primeIndex;
    }
  }

  for (i = 0; i < primeIndex; i++)
    printf("%i ", primes[i]);

    printf("\n");

  return 0;
}
