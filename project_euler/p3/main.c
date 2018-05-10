#include "p3.h"

int main(void) {
  int     i;
  long    number, prime, max_prime = 0;

  printf("Enter a number: ");
  scanf("%li", &number);
  while (number >= 2) {
    for (i = 2; i <= number; i++)
      if (number % i == 0 && is_prime(i)) {
        prime = i;
        max_prime = maximum(prime, max_prime);
        number /= i;
      }
  }
  printf("The greatest prime factor is: %li\n\n", max_prime);

  return 0;
}
