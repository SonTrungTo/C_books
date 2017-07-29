// prime returns 1 if its arg is a prime and 0 otherwise.
#include <stdio.h>

int main(void) {
  int    i;
  int    prime(int n);

  for (i = 0; i < 999; i++) {
    if(prime(i) != 0)
      printf("%i ", i);
  }

  return 0;
}

int prime(int n) {
  int    i;

  if (n == 2 || n == 3)
    return 1;
  else if(n == 0 || n == 1)
    return 0;
  else {
    for (i = 2; i < n; i++) {
      if( n % i == 0)
        return 0;
      }
    return 1;
  }
}
