/* Greatest common divisor */
#include <stdio.h>

int gcd(int p, int q) {
  int   temp;

  while ((p % q) != 0) {
    temp = q;
    q = p % q;
    p = temp;
  }

  return q;
}

int main(void) {
  int p, q;

  printf("Enter two integers: ");

  while (scanf("%d%d", &p, &q) == 2) {
    printf("gcd(%d,%d) = %d \n\n", p, q, gcd(p,q));
  }

  printf("Program exited -- Bye!\n");
  return 0;
}
