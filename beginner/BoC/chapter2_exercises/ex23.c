/***************************************************************************
 *Using value returned by time() to measure the time it takes to call rand()*
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define   NCALLS    1000000000   /* Number of fct calls */
#define   NCOLS     3           /* Number of columns */
#define   NLINES    10           /* Number of lines */

int main(void) {
  int   i, val;
  long  begin, end, diff;

  begin = time(NULL);
  srand(time(NULL));
  printf("\nTIMING TEST: %i calls to rand()\n\n", NCALLS);
  for (i = 1; i <= NCALLS; i++) {
    val = rand();
    if (i <= NCOLS * NLINES) {
      printf("%11i", val);
      if (i % 3 == 0)
        putchar('\n');
    } else if (i == NCOLS * NLINES + 1) {
      printf("%7s\n\n", ".......");
    }
  }
  end = time(NULL);
  diff = end - begin;
  printf("%s%li\n%s%li\n%s%li\n%s%.10f\n\n",
      "          end time: ", end,
      "        begin time: ", begin,
      "      elapsed time: ", diff,
      "time for each call: ", (double) diff / NCALLS);

  return 0;
}
