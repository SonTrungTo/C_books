// Removing 2 effiencies: Remove checking for even number as prime and as divisor!
// An improved version of prog6_10.c
#include <stdio.h>
int main(void) {
  int    p, d;
  _Bool  isPrime;

  for (p = 2; p < 50; p++) {
    if (p > 2 && p % 2 == 0)
      isPrime = 0; // Removing efficiency 1: Checking as prime
    else
      isPrime = 1;
    for (d = 2; d < p; d++) {
      if(!isPrime)
        break;    // Removing efficiency 2: Checking as divisor
      else
        if (p % d == 0)
          isPrime = 0;
    }

    if (isPrime) {
      printf("%i ", p);
    }
  }

  return 0;
}
