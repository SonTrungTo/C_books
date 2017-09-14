/**
*   Example 11.4: Program to illustrate structure pointers.
*/
#include <stdio.h>

struct date {
  int day;
  int month;
  int year;
};

int main(void) {
  struct date *datePtr, todaysDate;

  datePtr = &todaysDate;
  datePtr->day = 14;
  datePtr->month = 9;
  datePtr->year = 2017;

  printf("Today is %i/%i/%i, Helsinki, Finland.\n", datePtr->day,
datePtr->month, datePtr->year);

  return 0;
}

// P/S: I think the figure 11.2 in the book is wrong: the pointer datePtr
// should have pointed to the date structure todaysDate.
