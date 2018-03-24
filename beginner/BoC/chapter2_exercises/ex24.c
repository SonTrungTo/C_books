/*******************************************************************************
* Testing the hypothesis that rand() has a uniform distribution                *
* Meaning: on average, the number of values > median = that of values < median.*
* Moreover, the difference of above_cnt and below_cnt oscillates about 0.      *
********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define   NCALLS  100000000
#define   NLINES  5

int main(void) {
  double  median = RAND_MAX / 2.0 + 0.5;
  int     i, above_cnt = 0, below_cnt = 0, val, sum = 0, difference = 0;

  printf("%15s%11s%11s\n",
        "above_cnt", "below_cnt", "difference");
  for (i = 1; i <= NCALLS; i++) {
    val = rand() - median;

    if (val > 0)
      ++above_cnt;
    else
      ++below_cnt;

    difference = above_cnt - below_cnt;
    sum += difference;

    if (i <= NLINES) {
      printf("%11i%11i%11i\n", above_cnt, below_cnt, difference);
    }
    else if (i == NLINES + 1) {
      printf("%7s\n", "------");
    }
  }

  printf("%s%f\n", "The average of difference is: ", (double) sum / NCALLS);
  // Conclusion: The hypothesis is FALSE: rand() DOES NOT have a uniform distribution!

  return 0;
}
