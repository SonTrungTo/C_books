#include <stdio.h>

int sum_of_squares(int n);
int square_of_sum(int n);

int main(void) {
  int  n;

  printf("The first n number is: ");
  while (scanf("%i", &n) == 1) {
    printf("The sum of squares of the first %i number%s is: %i\n",
  n, (n > 1) ? "s" : "", sum_of_squares(n) );
    printf("The square of the sum of the first %i number%s is: %i\n",
  n, (n > 1) ? "s" : "", square_of_sum(n) );
    printf("The difference between them is: %i\n\n", square_of_sum(n) - sum_of_squares(n));
  }

  printf("Program finished! Bye!\n");
  return 0;
}

int sum_of_squares(int n) {
  int sum = 0, i;

  for (i = 1; i <= n; i++)
    sum += i*i;

  return sum;
}

int square_of_sum(int n) {
  int sum = 0, i;

  for (i = 1; i <= n; i++)
    sum += i;

  return (sum * sum);
}
