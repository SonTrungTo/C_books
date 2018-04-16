/* Find a root of f() by the bisection method */
#include "find_root.h"

int         cnt = 0;
const dbl   eps = 1e-13;

int main(void) {
  dbl a = -10, b = 10;
  dbl root;

  assert(f(a) * f(b) < 0);
  root = bisection(f, a, b);
  printf("%s%d\n%s% .15f\n%s% .15f\n",
    "No. of fct calls: ", cnt,
    "Root:             ", root,
    "Fct Value:        ", f(root));
  return 0;
}
