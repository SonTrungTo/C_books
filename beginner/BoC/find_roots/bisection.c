#include "find_roots.h"

dbl bisection(pfdd f, dbl a, dbl b) {
  dbl     m = (a + b) / 2;

  ++cnt;
  if (f(m) == 0.0 || fabs(b - a) < eps)
    return m;
  else if (f(a) * f(m) <= 0.0)
    return bisection(f, a, m);
  else
    return bisection(f, m, b);
}
