/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
/* Normal version */
int binsearch(int x, int v[], int n) {
  int   low, mid, high;

  low  = 0;
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

  return  -1;
}

/* Edited version */
int binsearch2(int x, int v[], int n) {
  int   low, mid, high;

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
    return mid;

  return  -1;
}

/* shellsort: sort v[0]...v[n-1] into an increasing order, D.L.Shell, 1959 */
void shellsort(int v[], int n) {
  int   i, j, gap, temp;

  for (gap = n / 2; gap > 0; gap /= 2)
    for (i = gap; i < n; i++)
      for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
        temp = v[j+gap];
        v[j+gap] = v[j];
        v[j] = temp;
      }
}

/* qsort: sort v[left]...v[right] into an increasing order, C.A.R.Hoare, 1962 */
void qsort(/* arguments */) {
  /* code */
  return 0;
}
