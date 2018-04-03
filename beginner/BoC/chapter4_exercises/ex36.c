/* Algorithm to approximte a square root */
#include <stdio.h>

int main(void) {
  double x0, x1 = 1, a;
  int    cnt = 0;

  printf("Enter the number whose square root is evaluated:  ");
  scanf("%lf", &a);
  printf("%4s%18s%18s%25s\n\n",
        "Cnt", "x0", "x1", "a - x1 * x1");
  do {
    x0 = x1;                    /* Save the current value of x1 */
    x1 = 0.5 * (x1 + a / x1);    /* Compute the new value of x1 */
    printf("%4d%22.15lf%22.15lf%22.15lf\n", ++cnt, x0, x1, a - x1 * x1);
  } while(x0 != x1);


  return 0;
}
