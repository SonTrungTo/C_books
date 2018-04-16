#include <assert.h>
#include <stdio.h>
#include <math.h>

typedef double   dbl;

extern int       cnt;
extern const dbl eps;             /* epsilon, a small quantity */

dbl bisection(dbl (*)(dbl), dbl, dbl);
dbl f(dbl x);
