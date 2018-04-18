#include <assert.h>
#include <stdio.h>
#include <math.h>

typedef double dbl;

extern int        cnt;
extern const dbl  eps;
extern const dbl    m;
extern const dbl    e;

dbl bisection(dbl f(dbl x), dbl a, dbl b);
dbl kepler(dbl x);
