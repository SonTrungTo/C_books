#include <stdio.h>

#define     BOTTOM_SPACE    "\n\n\n\n\n"
#define     HEIGHT          17
#define     OFFSET          "                 " // 17 blanks
#define     TOP_SPACE       "\n\n\n\n\n"

int main(void) {
  int    i;

  printf(TOP_SPACE);
  printf(OFFSET "IIIIIII" OFFSET "IIIIIIIIII\n");
  for (i = 0; i < HEIGHT; i++) {
    printf(OFFSET "  III" OFFSET "II\n");
  }
  printf(OFFSET "IIIIIII" OFFSET "IIIIIIIIII\n");
  printf(BOTTOM_SPACE);

  return 0;
}
