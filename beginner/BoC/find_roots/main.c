#include "find_roots.h"

int         cnt = 0;
const dbl   eps = 1e-13;

int main(void) {
  int    begin_cnt, i, nfct_calls;
  dbl    a = -100, b = +100, root, val;
  pfdd   f[N] = {NULL, f1, f2, f3};

  for (i = 1; i < N; i++) {
    assert(f[i](a) * f[i](b) < 0);
    begin_cnt = cnt;
    root = bisection(f[i], a, b);
    nfct_calls = cnt - begin_cnt;
    val = f[i](root);
    printf("%s%d%s% .15f\n%s%d%s% .15f\n%s%3d\n\n",
"For f[", i, "](x) an approximate root is x0 = ", root,
"  Fct evaluation at the root: f[", i, "](x0 = ", val,
"   Number of fct calls to bisection() = ", nfct_calls);
  }

  return 0;
}
