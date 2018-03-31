/* +(n 2n) if n >= 0
   +(2n n) if n <  0
   Using for loops only
 */
#include <stdio.h>

int main(void) {
  long   sum = 0, n;

  printf("Enter n:  ");
  scanf("%ld", &n);
  if (n >= 0)
    for (int i = n; i <= 2*n; i++)
      sum += i;
  else
    for (int i = n; i >= 2*n; i--)
      sum += i;

  printf("The sum is: %ld\n", sum);

  return 0;
}
