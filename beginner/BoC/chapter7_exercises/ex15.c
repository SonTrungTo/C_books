#include <stdio.h>
#include <stdlib.h>

enum month {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
typedef  enum month   month;

int     isLeapYear(int  year);
month   nextMonth(month current_month);
void    prn_next_day(int today, int current_month);

int isLeapYear(int year) {
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    return 1;
  else
    return 0;
}

month nextMonth(month current_month) {
  return  ((current_month + 1) % 12);
}

void prn_next_day(int  today, int  current_month) {
  int    daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  month  thisMonth = current_month - 1;
  int    nextDay;

  
}
