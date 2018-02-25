/* Printing a table of powers. */
#include <stdio.h>
#define  SIZE     10
#define  COLONS   ":::::"
#define  OFFSET   "   "

int main(void) {
  int    i;

  printf(COLONS OFFSET "%s" OFFSET COLONS "\n\n", "A TABLE OF POWERS");
  printf("%s" OFFSET "%s" OFFSET "%s" OFFSET "%s" OFFSET "%s\n",
          "Integer", "Square",  "3rd power",  "4th power", "5th power");
  printf("%s" OFFSET "%s" OFFSET "%s" OFFSET "%s" OFFSET "%s\n",
          "-------", "------",  "---------",  "---------", "---------");
  for (i = 1; i <= SIZE; i++) {
    printf("%7d" OFFSET "%6d" OFFSET "%9d" OFFSET "%9d" OFFSET "%9d\n",
          i, i*i, i*i*i, i*i*i*i, i*i*i*i*i);
  }

  return 0;
}
