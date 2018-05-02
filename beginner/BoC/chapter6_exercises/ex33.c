#include <stdio.h>

int main(void) {
  int   a[3][5], i, j, *p = *a;

  for (i = 0; i < 3; i++)
    for (j = 0; j < 5; j++)
      a[i][j] = i * 5 + j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 5; j++)
      printf("%s%12d",
    (j == 0) ? "\n" : "", a[i][j] );
  printf("\n");
  for (i = 0; i < 15; i++)
    printf("%s%12d", (i % 5 == 0) ? "\n" : "", *(p + i)); /*
    // i is the value of storage mapping function.
                                                          */
  printf("\n\n%12d%12d\n%12d%12d\n%12d%12d\n%12d%12d\n\n",
**a, **(a + 1), // **a = *(a[0])
*(a[0] + 1), *(*a + 1),
*(a[1] + 2), *(*(a + 1) + 2),
*(a[2] + 3), *(*(a + 2) + 3) );
  printf("%-11s%s%12ld\n%-11s%s%12ld\n%-11s%s%12ld\n\n",
"(int) a", "=", (long) a, // a is the pointer to the matrix! (memory location)
"(int) *a", "=", (long) *a, // *a is the pointer to the array that uses
// storage mapping function value as its index! (memory location)
"(int) **a", "=", (long) **a
 );

  return 0;
}
