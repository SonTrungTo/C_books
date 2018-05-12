#include "p4.h"

int main(void) {
  int   largest_palindrome = 0, a, b;
  int   i, j, product;

  for (i = 100; i <= 999; i++)
    for (j = 100; j <= 999; j++) {
      product = i * j;
      if (is_palindrome(product) && product > largest_palindrome) {
        largest_palindrome = maximum(product, largest_palindrome);
        a = i;
        b = j;
      }
    }

  printf("Largest palindrome whose product are 3-digit: %i = %i x %i\n\n",
largest_palindrome, a, b );
}
