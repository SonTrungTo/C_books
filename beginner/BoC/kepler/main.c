#include "kepler.h"

int         cnt = 0;
const dbl   eps = 1e-15;
const dbl   m   = 2.2;
const dbl   e   = 0.5;

int main(void) {
  dbl   a = -100.0, b = 100.0;
  dbl   root;

  assert(kepler(a) * kepler(b) <= 0);
  root = bisection(kepler, a, b);
  printf("%s%d\n%s% .15f\n%s% .15f\n",
"Number of fct calls: ", cnt,
"Approx. root       : ", root,
"Approx. value      : ", kepler(root) );

  return 0;
}
