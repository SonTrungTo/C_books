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
void qsort(int v[], int left, int right) {
  void    swap(int [], int, int);
  int     i, last;

  if (left >= right)                  /* algorithm stops if the array contains */
    return;                           /* less than two elements. */
  last = left;
  swap(v, left, (left + right) / 2);  /* move the partition element to v[0] */
  for (i = left + 1; i <= right; i++)
    if (v[left] > v[i])
      swap(v, i, ++last);
  swap(v, left, last);               /* put the partition element back. */
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);        /* if last is used instead, it does not WORK! ?????? WHY???????????????????????????????? */
}

void swap(int v[], int i, int j) {
  int     temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}
