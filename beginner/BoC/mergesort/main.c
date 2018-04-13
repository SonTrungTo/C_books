/* To test merge() and mergesort() */
#include "mergesort.h"

int main(void) {
  int    n, sample_array[] = {4, 3, 1, 67, 55, 8, 0, 4,
                             -5, 37, 7, 4, 2, 9, 1, -1};

  n = sizeof(sample_array) / sizeof(int); /* number of elements */
  printf("Before the sorting:\n");
  wrt(sample_array, n);
  mergesort(sample_array, n);
  printf("After the sorting:\n");
  wrt(sample_array, n);

  return 0;
}
