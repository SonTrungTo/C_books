// Example 16.1: Illustrating printf formats.
// Program to illustrate various printf formats.
#include <stdio.h>

int main(void) {
  char          c = 'X';
  char        s[] = "abcdefghijklmnopqrstuvwxyz";
  int           i = 425;
  short int     j = 17;
  unsigned int  u = 0xf179U;
  long int      l = 75000L;
  long long int L = 0x1234567812345678LL;
  float         f = 12.978F;
  double        d = -97.4583;
  char        *cp = &c;
  int         *ip = &i;
  int         c1, c2;

  printf("Integers: \n");
  printf("%i  %o  %x  %u\n", i,i,i,i);
  printf("%x  %X  %#x %#X\n", i,i,i,i);
  printf("%+i % i %07i %.7i\n", i,i,i,i);
  printf("%i  %o  %x  %u\n", j,j,j,j);
  printf("%i  %o  %x  %u\n", u,u,u,u);
  printf("%ld %lo %lx %lu\n", l,l,l,l);
  printf("%lli %llo %llx %llu\n", L,L,L,L);

  printf("\nFloats and Doubles:\n");
  printf("%f  %e  %g\n", f,f,f);
  printf("%.2f  %.2e\n", f,f);  // Deviation is small.
  printf("%.0f  %.0e\n", f,f);  // Deviation is great between these two.
  printf("%7.2f  %7.2e\n", f,f); // Maximum size of field is 7 columns, of which two are significant digits.
  printf("%f  %e  %g\n", d,d,d);
  printf("%.*f\n", 3,d);        // three significant digits precision == %.3f
  printf("%*.*f\n", 8,2,d);     // == %8.2f

  return 0;
}
