#include <assert.h>
#include <stdio.h>
#include <math.h>

#define     N       4     /* size of array of ptrs to fcts */

typedef double  dbl;
/*
// Create the type "pointer to function taking a dbl and return a dbl"
*/
typedef dbl     (*pfdd)(dbl);

extern int        cnt;
extern const dbl  eps;

dbl bisection(pfdd f, dbl a, dbl b);
dbl f1(dbl x);
dbl f2(dbl x);
dbl f3(dbl x);
