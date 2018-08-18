#include <stdio.h>
#include <time.h>

int binsearch1(int x, int v[], int n); /* Original binsearch */
int binsearch2(int x, int v[], int n); /* Rewritten binsearch */

int main(void) {
  int    t1, t2;
  int    v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int    x = 10;

  t1 = time(NULL);
  printf("%i\n", binsearch1(x, v, 10));
  t2 = time(NULL);
  printf("%i\n", t2 - t1);

  t1 = time(NULL);
  printf("%i\n", binsearch2(x, v, 10));
  t2 = time(NULL);
  printf("%i\n", t2 - t1);

  return 0;
}

/* Original K & R */
int binsearch1(int x, int v[], int n) {
  int    low, mid, high;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else
      return mid;
  }

  return    -1;
}

/* Use only 1 test in the loop */
int binsearch2(int x, int v[], int n) {
  int    low, mid, high;

  low = 0;
  high = n - 1;
  mid = (low + high) / 2;
  while (low <= high && x != v[mid]) {
    if (x < v[mid])
      high = mid - 1;
    else
      low = mid + 1;
    mid = (low + high) / 2;
  }

  if (x == v[mid])
    return   mid;
  else
    return    -1;
}

/* The difference in run-time is insignificant */
