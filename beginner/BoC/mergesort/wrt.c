/* Print out a particular array */
#include "mergesort.h"

void wrt(int key[], int n) {
  int   i;

  for (i = 0; i < n; i++)
    printf("%4d%s", key[i], ((i < n - 1) ? "" : "\n"));
}
