/* Quicksort! Pointer version with macros. */

#define   swap(x, y)   { int t;  t = x; x = y; y = t; }
#define   order(x, y)  if( x > y )  swap(x, y)
#define   o2(x, y)     order(x, y)
#define   o3(x, y, z)  o2(x, y); o2(x, z); o2(y, z)

typedef   enum {yes, no}   yes_no;

static  yes_no  find_pivot(int  *left, int  *right, int  *pivot_ptr);
static  int     *partition(int  *left, int  *right, int  pivot);

void quicksort(int  *left, int  *right) {
  int     *p, pivot;
}
