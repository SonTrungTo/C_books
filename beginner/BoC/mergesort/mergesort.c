/* Mergesort: Use merge() to sort an array of size n. */
/* key is assumed to be a power of 2 */
#include "mergesort.h"

void mergesort(int key[], int n) {
  int j, k, m, *w;

  for (m = 1; m < n; m *= 2)
    ;
  if (n < m) {
    printf("ERROR: Array size is not a power of 2 - BYE!\n");
    exit(1);
  }
  w = calloc(n, sizeof(int));
  assert(w != NULL);
  for (k = 1; k < n; k *= 2) {
    for (j = 0; j < n; j += 2*k) /* It does not need to be n - k, unless sup is needed! */
      merge(key + j, key + j + k, w + j, k, k);
    for (j = 0; j < n; j++)
      key[j] = w[j];
  }
  free(w);
}
