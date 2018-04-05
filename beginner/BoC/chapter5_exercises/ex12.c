/* is_fib_prime() checks whether the nth Fibbonacci number is prime */
#include <stdio.h>

int   is_prime(long n);
long  fibbonacci(int n);
int   is_fib_prime(int n0, int n1);
void  prn_result(void);

int main(void) {
  prn_result();
  return 0;
}

int is_prime(long n) {
  int k;

  for (k = 2; k <= n - 1; k++)
    if (n % k == 0)
      return 0;
  return 1;
}

long fibbonacci(int n) {
  long  f0 = 0, f1 = 1, temp;
  int   i;

  if (n == 0)
    return  f0;
  else if (n == 1)
    return  f1;
  else {
    for (i = 2; i <= n; i++) {
      temp = f1;
      f1 += f0;
      f0 = temp;
    }
    return  f1;
  }
}

int is_fib_prime(int n0, int n1) { /* Test if all fibs are prime from n0 to n1 */
  int i;

  for (i = n0; i <= n1; i++)
    if ( !(is_prime(fibbonacci(i))) )
      return 0;

  return 1;
}

void prn_result(void) {
  int   n0, n1;

  printf("Enter the range of Fibbonacci [n0, n1]:  ");
  scanf("%d%d", &n0, &n1);
  if (is_fib_prime(n0,n1))
    printf("\n\nAll prime terms are Fibbonacci primes.\n\n");
  else
    printf("\n\nThere exists at least a prime term in which Fibbonacci is not a prime.\n\n");
}
