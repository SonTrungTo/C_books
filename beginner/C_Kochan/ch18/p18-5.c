// Example 18.5: Working with gdb
// This program is only for illustration of gdb. Otherwise, it's useless.
#include <stdio.h>
#include <stdlib.h>

struct date {
  int day;
  int month;
  int year;
};

struct date foo(struct date x)
{
  ++x.day;

  return x;
}

int main(void) {
  struct date today = {30, 12, 2017};
  int         array[5] = {1, 2, 3, 4, 5};
  struct date *newDate, foo();
  char        *string = "test string";
  int         i = 3;

  newDate = (struct date *) malloc(sizeof(struct date));
  newDate->day = 1;
  newDate->month = 1;
  newDate->year = 2018;

  today = foo(today);

  free(newDate);

  return 0;
}
