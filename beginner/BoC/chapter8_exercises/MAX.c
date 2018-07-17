#include <stdio.h>

#define   prn(x)        printf(#x " = %i\n", x)
#define   MAX2(x,y)     ( (x) > (y) ? (x) : (y) )
#define   MAX(x,y,z)    MAX2(MAX2(x,y),z)

int main(void) {
  prn(MAX(2,'b',-1));   /* Cannot check type! */
  return 0;
}
