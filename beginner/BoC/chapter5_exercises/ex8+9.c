/* Experiment with tbl_of_powers */
#include <stdio.h>

#define   N   8

long    power(int, int);
void    prn_heading(void);
void    prn_tbl_of_powers(int);

int main(void) {
  prn_heading();
  prn_tbl_of_powers(N);
  return 0;
}

void prn_heading(void) {
  printf("\n:::::     A TABLE OF POWERS     :::::\n\n");
}

void prn_tbl_of_powers(int n) {
  int   i, j;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++)
      if (j == 1)
        printf("%ld", power(i,j));
      else
        printf("%9ld", power(i,j));
    putchar('\n');
  }
}

long power(int n, int m) {
  int     i;
  long    product = 1;

  for (i = 0; i < m; i++)
    product *= n;

  return product;
}
