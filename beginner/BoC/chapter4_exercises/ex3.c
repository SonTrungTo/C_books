/* Program to read all characters from input file */
#include <stdio.h>

int main(void) {
  int   digit_cnt = 0, other_cnt = 0;
  int   c;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++digit_cnt;
    else
      ++other_cnt;
  }

  printf("The text has %d digits and %d other characters.\n",
        digit_cnt, other_cnt);

  return 0;
}
