// scanf printing number of successful conversions (char)
#include <stdio.h>

int main(void) {
  char    c1, c2, c3;
  int     cnt;

  printf("Input three characters:  ");
  cnt = scanf("%c%c%c", &c1, &c2, &c3);
  if (c3 == '\n' || (c2 == '\n' && c3 == '\0'))
    cnt -= 1;
  printf("Number of successful conversions: %d\n", cnt);

  return 0;
}
