// Generating 100 Fibonacci numbers without using array
#include <stdio.h>

int main(void) {
  unsigned long long int  fib1 = 0, fib2 = 1, fib3;

  printf("%llu %llu ", fib1, fib2);

  for (int i = 0; i < 98; i++) {
    fib3 = fib2 + fib1;
    printf("%llu ", fib3);
    fib1 = fib2;
    fib2 = fib3;
  }

  return 0;
}
