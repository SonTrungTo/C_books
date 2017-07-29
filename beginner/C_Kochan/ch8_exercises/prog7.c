// function to raise an integer to a positive integer power.
#include <stdio.h>

unsigned long int   x_to_the_n(int x, int n){
  unsigned long int    result;

  if (x == 0 && n == 0)
    return 0;
  else if (n == 0)
    result = 1;
  else
    result = x * x_to_the_n(x, n - 1);

  return result;
}

int main(void) {
  int                 i;
  unsigned long int   x_to_the_n(int x, int n);

  for (i = 0; i <= 10; i++)
    printf("0^{%2i} = %lu\n", i, x_to_the_n(0,i)); // 0^0 is NaN.

  return 0;
}
