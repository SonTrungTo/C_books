// Addition
#include <assert.h>
#include <stdio.h>

#define   N     20        /* size of all arrays */

typedef const char  cchar;

void multiply(int product[], int a[], int b[]);   /* product  = a * b */
void add(int sum[], int a[], int b[]);            /* sum      = a + b */
void wrt(cchar *s, int a[]);

int main(void) {
  int   a[N] = {7, 5, 9, 8, 9, 7, 5, 0, 0, 9, 9, 0, 8, 8};
  int   b[N] = {7, 7, 5, 3, 1, 2, 8, 8, 9, 6, 7, 7};
  int   c[N] = {2, 1};
  int   d[N] = {2, 1};
  int   sum[N];
  int   product[N];
  int   ndigits;

  add(sum, a, b);
  multiply(product, c, d);
  wrt("Integer a: ", a);
  wrt("Integer b: ", b);
  wrt("Integer c: ", c);
  wrt("Integer d: ", d);
  wrt("      Sum: ", sum);
  wrt("  Product: ", product);

  return 0;
}

void add(int sum[], int a[], int b[]) {
  int     carry = 0;
  int     i;

  for (i = 0; i < N; i++) {
    sum[i] = a[i] + b[i] + carry;
    if (sum[i] < 10)
      carry = 0;
    else {
      carry = sum[i] / 10;
      sum[i] %= 10;
    }
  }
}

void multiply(int product[], int a[], int b[]) {
  int     carry = 0;
  int     i, j, k;

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      product[j] = b[i] * a[j] + carry;
      if (product[j] < 10)
        carry = 0;
      else {
        carry = product[j] / 10;
        product[j] %= 10;
      }
      for (k = 0; k < i; k++)
        product[k] = 0;
    }
  }
}

void wrt(cchar *s, int a[]) {
  int      i;

  printf("%s", s);
  /*
  // Print leading zeros as blanks.
  */
  for (i = N - 1; i > 0 && a[i] == 0; i--)
    putchar(' ');
  /*
  // After a leading digit greater than zero is found,
  // print all the remaining digits, including zeros.
  */
  for ( ; i >= 0 ; --i)
    printf("%d", a[i]);
  putchar('\n');
}
