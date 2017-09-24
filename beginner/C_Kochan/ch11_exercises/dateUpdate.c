// Exercise 11: dateUpdate updates the date structure using pointers
#include <stdio.h>
#include <stdbool.h>

struct date {
  int day;
  int month;
  int year;
};

bool isLeapYear(struct date *datePtr) {
  if (datePtr->year % 4 == 0 && datePtr-> year % 100 != 0 ||
  datePtr->year % 400 == 0)
    return true;
  else
    return false;
}

int numberOfDays(struct date *datePtr) {
  int        days;
  bool       isLeapYear(struct date *datePtr);
  const int  daysPerMonth[12] = {31,28,31,30,31,30,
                                 31,31,30,31,30,31};

  if (isLeapYear(datePtr) && datePtr->month == 2)
    days = 29;
  else
    days = daysPerMonth[datePtr->month - 1];

  return days;
}

void dateUpdate(struct date *datePtr) {
  int     numberOfDays(struct date *datePtr);

  if ( datePtr->day != numberOfDays(datePtr) )
    *datePtr = (struct date) {datePtr->day + 1, datePtr->month, datePtr->year};
  else if ( datePtr->month == 12 )
    *datePtr = (struct date) {1, 1, datePtr->year + 1};
  else
    *datePtr = (struct date) {1, datePtr->month + 1, datePtr->year};
}

int main(void) {
  int         i;
  void        dateUpdate(struct date *datePtr);
  struct date currentDate, *currentDatePtr = &currentDate;

  printf("Enter the day today(dd/mm/yyyy): ");
  scanf("%i/%i/%i", &currentDate.day, &currentDate.month, &currentDate.year);

  printf("\n\n");
  for (i = 1; i <= 14; i++) {
    dateUpdate(currentDatePtr);
    printf("%.2i day(s) later is: %.2i/%.2i/%i.\n", i, currentDate.day, currentDate.month,
  currentDate.year);
  }

  return 0;
}
