/* +(n 2n) if n >= 0
   +(2n n) if n <  0
   Using while loops only
*/
#include <stdio.h>

int main(void) {
  long   sum = 0, n, i;

  printf("Enter n:   ");
  scanf("%ld", &n);
  i = n;
  if (n >= 0)
    while (i <= 2*n) {
      sum += i;
      ++i;
    }
  else
    while (i >= 2*n) {
      sum += i;
      --i;
    }
  printf("The sum is:  %ld\n", sum);

  return 0;
}
