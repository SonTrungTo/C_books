/* least common multiple (lcm) of two positive integers u and v
   := smallest possible integer that is divisible by both u and v.

   lcm != gcd : lcm is a divided number, and gcd is a divisor.
*/
#include <stdio.h>
// gcd := greatest common divisor
 int gcd(int u, int v) {
  int   temp;

  if (u < 0 || v < 0) // not necessary in this program, but here for good practice.
    return  -1;

  while (v != 0) {
    temp = u % v;
    u    = v;
    v    = temp;
  }

  return u;
}

int lcm(int u, int v) {
  int             result;
  int             gcd(int u, int v);

  if (u < 0 || v < 0)
    return  -1;

  result = (u * v) / gcd(u, v);

  return result;
}

int main(void) {
   int  u, v;
   int  lcm(int u, int v);

  printf("Enter u and v:\n");
  scanf("%i", &u);
  scanf("%i", &v);

  printf("\n\n");
  if (lcm(u,v) < 0)
    printf("Invalid input for either u or v!\n");
  else
    printf("The least common multiple of %i and %i is %i \n", u, v, lcm(u, v));

  return 0;
}
