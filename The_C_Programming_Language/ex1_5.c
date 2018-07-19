#include <stdio.h>

#define     LOWER     0     /* lower limit of the table */
#define     UPPER     300   /* upper limit */
#define     STEP      20    /* step size */

int main(void) {
  int    fahr;

  printf("%s\n", "CONVERSION TABLE FROM FAHRENHEIT TO CELSIUS.(Reverse order)");
  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

  return 0;
}
