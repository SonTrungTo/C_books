#include "date.h"

// isLeapYear written!
bool isLeapYear(Date d) {
  if (d.year % 4 == 0 && d.year % 100 != 0 || d.year % 400 == 0)
    return true;
  else
    return false;
}

// numberOfDays written!
int numberOfDays(Date d) {
  int   days;
  int   daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  bool  isLeapYear(Date d);

  if (isLeapYear(d) && d.month == 2)
    days = 29;
  else
    days = daysPerMonth[d.month - 1];

  return days;
}

// dateUpdate written!
Date dateUpdate(Date today) {
  int  numberOfDays(Date d);
  Date tomorrow;

  if (today.day != numberOfDays(today))
    setDate(tomorrow,today.day + 1,today.month,today.year);
  else if (today.month == 12)
    setDate(tomorrow,1,1,today.year + 1);
  else
    setDate(tomorrow,1,today.month + 1,today.year);

  return tomorrow;
}

int main(void) {
  Date dateUpdate(Date today);
  Date tomorrow, todaysDate;

  printf("Enter today's date(dd/mm/yyyy): ");
  scanf("%i/%i/%i", &todaysDate.day,&todaysDate.month,&todaysDate.year);

  tomorrow = dateUpdate(todaysDate);

  printf("Tomorrow is %i/%i/%i\n", tomorrow.day,
  tomorrow.month, tomorrow.year);

  return 0;
}
