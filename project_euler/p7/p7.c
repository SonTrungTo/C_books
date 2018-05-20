#include <stdio.h>

int is_prime(int n);

int main(void) {
  int    cnt = 1;
  int    i;

  for (i = 3; cnt < 10001 ; i+=2) {
    if (is_prime(i))
      ++cnt;
  }

  printf("The %ist prime number is %i.\n", cnt, i -= 2);

  return 0;
}

int is_prime(int n) {
  if (n != 2 && n % 2 == 0)
    return 0;

  for (int i = 3; i < n; i += 2)
    if (n % i == 0)
      return 0;

  return 1;
}
