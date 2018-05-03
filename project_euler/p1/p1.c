/*
// If we list all natural numbers below 10 that are multiples of 3 or 5, we get
// 3, 5, 6, 9. The sum of these is 23.
// Find the sum of all multiples of 3 or 5 below 1000.
*/
#include <stdio.h>

int  is_multiple_3(int);
int  is_multiple_5(int);
void printing_sum(void);

int main(void) {
  printing_sum();
  return 0;
}

int is_multiple_3(int x) {
  if (x % 3 == 0)
    return 1;
  else
    return 0;
}

int is_multiple_5(int x) {
  if (x % 5 == 0)
    return 1;
  else
    return 0;
}

void printing_sum(void) {
  int i, sum, N;

  printf("Enter the upper bound (press 'q' to exit): ");
  while (scanf("%d", &N) == 1) {
    sum = 0;
    for (i = 3; i < N; i++)
      if (is_multiple_3(i) || is_multiple_5(i))
        sum += i;
    printf("The sum of all multiples of 3 or 5 below %d is %d.\n\n", N, sum);
    printf("Enter the next upper bound: ");
  }

  printf("OK! Bye!\n");
}
