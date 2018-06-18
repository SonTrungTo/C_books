#include <stdio.h>
#include <stdlib.h>

enum month {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
typedef  enum month   month;

int     isLeapYear(int  year);
month   nextMonth(month current_month);
void    prn_next_day(int day, int current_month, int year);
void    prn_month_name(month current_month);

int main(void) {
  int   day, current_month, year;

  printf("Enter today (format dd/mm/yyyy)\n");
  printf("Today is ");
  scanf("%i/%i/%i", &day, &current_month, &year);

  prn_next_day(day, current_month, year);

  return 0;
}

int isLeapYear(int year) {
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    return 1;
  else
    return 0;
}

month nextMonth(month current_month) {
  return  ((current_month + 1) % 12);
}

void prn_next_day(int  day, int  current_month, int  year) {
  int    daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  month  thisMonth = current_month - 1;
  int    numberOfDays;

  if (isLeapYear(year))
    daysInMonth[1] = 29;
  numberOfDays = daysInMonth[thisMonth];

  if (day == numberOfDays && thisMonth == dec) {
    day        = 1;
    thisMonth  = nextMonth(thisMonth);
    year      += 1;
  } else if (day == numberOfDays) {
    day        = 1;
    thisMonth  = nextMonth(thisMonth);
  } else
    day       += 1;

  printf("The next day is %i ", day);
  prn_month_name(thisMonth);
  printf(", %i\n\n", year);
}

void prn_month_name(month current_month) {
  switch (current_month) {
    case jan:
      printf("January");
      break;
    case feb:
      printf("February");
      break;
    case mar:
      printf("March");
      break;
    case apr:
      printf("April");
      break;
    case may:
      printf("May");
      break;
    case jun:
      printf("June");
      break;
    case jul:
      printf("July");
      break;
    case aug:
      printf("August");
      break;
    case sep:
      printf("September");
      break;
    case oct:
      printf("October");
      break;
    case nov:
      printf("November");
      break;
    case dec:
      printf("December");
      break;
    default:
      printf("\nERROR: Unidentified enumerator.\n");
      break;
  }
}
