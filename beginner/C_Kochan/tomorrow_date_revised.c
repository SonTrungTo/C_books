// tomorrow_date accounts for leap years
#include <stdio.h>
#include <stdbool.h>

struct date {
  int day;
  int month;
  int year;
};

// Function to determine if a year is a leap year.

bool isLeapYear(struct date d) {
  bool  leapYearFlag = false; // By default, not a leap year!

  if ((d.year % 4 == 0 && d.year % 100 != 0)
  || d.year % 400 == 0)
    leapYearFlag = true;  // Determine if this is a leap year!

  return leapYearFlag;
}

// Function to calculate number of days in a month

int numberOfDays(struct date d) {
  int       days;
  bool      isLeapYear(struct date d);
  const int daysPerMonth[12] = {31,28,31,30,31,30,
                               31,31,30,31,30,31};

  if (isLeapYear(d) && d.month == 2)
    days = 29;
  else
    days = daysPerMonth[d.month - 1];

  return days;
}

// Function to update tomorrow date.

struct date dateUpdate(struct date d) {
  struct date   tomorrow;

  if (d.day != numberOfDays(d)) {
    tomorrow.day      = d.day + 1;
    tomorrow.month    = d.month;
    tomorrow.year     = d.year;
  } else if (d.month  == 12) {     // end of year
    tomorrow.day      = 1;
    tomorrow.month    = 1;
    tomorrow.year     = d.year  + 1;
  } else {                        // end of month
    tomorrow.day      = 1;
    tomorrow.month    = d.month + 1;
    tomorrow.year     = d.year;
  }

  return tomorrow;
}

// Writing the main program to display tomorrow date.

int main(void) {
  struct date   today, tomorrow;
  struct date   dateUpdate(struct date d);

  printf("Enter today's date (dd mm yyyy):\n");
  scanf("%i%i%i", &today.day, &today.month, &today.year);

  tomorrow = dateUpdate(today);
  printf("Tomorrow's date is %i/%i/%i.\n", tomorrow.day,
tomorrow.month, tomorrow.year);

  return 0;
}
