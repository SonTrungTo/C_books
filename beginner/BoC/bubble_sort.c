/* An Example: Bubble Sort */
/* Slightly improved for efficiency. */
#include <stdio.h>

void swap(int *, int *);
void bubble(int *, int n);

int main(void) {
  int  a[] = {7, 3, 66, 3, -5, 22, -77, 2};

  bubble(a, 8);
  return 0;
}

void swap(int *pint1, int *pint2) {
  int   temp;

  temp    =   *pint1;
  *pint1  =   *pint2;
  *pint2  =   temp;
}

void bubble(int a[], int n) {
  int   i, j, is_swap;

  for (i = 0; i < n - 1; i++) {
    is_swap = 0;
    for (j = n - 1; j > i; j--)
      if (a[j - 1] >= a[j]) {
        swap(&a[j - 1], &a[j]);
        ++is_swap;
      }
    if (!is_swap) {
      printf("The sorting ends at %dth passes.\n", i);
      break;
    }
  }

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);

  printf("\n\n");
}
