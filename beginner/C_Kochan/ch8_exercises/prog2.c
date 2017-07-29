// prog8.4c modified! -> the value of triangularNumber is returned
#include <stdio.h>

int main(void) {
  int     result;
  int     triangularNumber(int n);

  result = triangularNumber(10);
  printf("Triangular number 10 is %i\n", result);
  result = triangularNumber(20);
  printf("Triangular number 20 is %i\n", result);
  result = triangularNumber(50);
  printf("Triangular number 50 is %i\n", result);

  return 0;
}

int triangularNumber(int n) {
  int     i, triangularNumber = 0;

  for (i = 1; i <= n; i++)
    triangularNumber += i;

  return  triangularNumber;
}
