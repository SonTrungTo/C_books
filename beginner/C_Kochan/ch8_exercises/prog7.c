// function to raise an integer to a positive integer power.
#include <stdio.h>

long long int   x_to_the_n(int x, int n){
  long int    result;

  if (x == 0 && n == 0)
    return -1;
  else if (n == 0)
    result = 1;
  else
    result = x * x_to_the_n(x, n - 1);

  return result;
}

int main(void) {
  int             x, i;
  long long int   x_to_the_n(int x, int n);

  printf("Enter a number x:\n");
  scanf("%i", &x);
  printf("\n\n");

  for (i = 0; i <= 10; i++) {
    if (x_to_the_n(x,i) < 0) {
      printf(" 0^{ 0} = NaN\n");
      continue;
    }
    printf("%2i^{%2i} = %lli\n", x, i, x_to_the_n(x,i));
  }

  return 0;
}
