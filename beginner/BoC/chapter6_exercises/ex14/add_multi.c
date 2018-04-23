#include "add.h"

void add(double f[], double g[], double h[], int n) {
  for (int i = 0; i < n + 1; i++)
    *f++ = *g++ + *h++;
}

void multiply(double f[], double g[], double h[], int n) {
  int i, j;

  for (i = 0; i < n + n + 1; i++)
    f[i] = 0;

  for (i = 0; i < n + 1; i++)
    for (j = i; j < n + 1; j++) {
      f[i + j] += (g[i] * h[j]);
      if (i != j) {
        swap(&i, &j);
        f[i + j] += (g[i] * h[j]);
        swap(&i, &j);
      }
    }
}
