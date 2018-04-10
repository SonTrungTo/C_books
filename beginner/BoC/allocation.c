/* calloc */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void wrt_array(int *a, int n);
int sum_array(int *a, int n);
void fill_array(int *a, int n);

int main(void) {
  int    *a, n;

  srand(time(NULL));
  printf("\n%s\n",
        "This program does the following: \n\n"
        "1. Allocate memory for an array. \n"
        "2. Assign all entries to a randomly distributed integers. \n"
        "3. Print the array and sum of its element \n"
        "4. Release the space. \n");
  for (; ; ) {
    printf("Input n:  ");
    if (scanf("%d", &n) != 1 || n < 1)
      break;
    putchar('\n');
    a = calloc(n, sizeof(int));
    fill_array(a, n);
    wrt_array(a, n);
    printf("Sum = %d\n\n", sum_array(a, n));
    free(a);
  }
  printf("\nBye!\n\n");

  return 0;
}

void wrt_array(int *a, int n) {
  int i;

  printf("a = [");
  for (i = 0; i < n; i++)
    printf("%d%s", a[i], ((i < n - 1) ? ", " : "]\n"));
}

void fill_array(int *a, int n) {
  int i;

  for (i = 0; i < n; i++)
    a[i] = rand() % 19 - 9;
}

int sum_array(int *a, int n) {
  int sum = 0, i;

  for (i = 0; i < n; i++)
    sum += a[i];

  return sum;
}
