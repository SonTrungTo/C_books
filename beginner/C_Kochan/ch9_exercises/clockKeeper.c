/**
*  Program to update time using both dateUpdate and timeUpdate from
* update_1_sec.c and tomorrow_date_revised.c
*/
#include <stdio.h>

struct time {
  int hour;
  int minute;
  int second;
};

struct date {
  int day;
  int month;
  int year;
};

struct timeAndDate {
  struct time   stime;
  struct date   sdate;
};

//--- This is from update_1_sec.c
struct time timeUpdate(struct time now) {
  ++now.second;

  if (now.second == 60) {
    ++now.minute;
    now.second = 0;

    if (now.minute == 60) {
      ++now.hour;
      now.minute = 0;

      if (now.hour == 24)
        now.hour = 0;
    }
  }

  return now;
}
//--- End of update_1_sec.c

//--- This is from tomorrow_date_revised.c
_Bool isLeapYear(struct date d) {
  _Bool isLeapYearFlag;

  if (d.year % 4 == 0 && d.year % 100 != 0
  || d.year % 400 == 0)
    isLeapYearFlag = 1;
  else
    isLeapYearFlag = 0;

  return isLeapYearFlag;
}

int numberOfDays(struct date d) {
  int         days;
  _Bool       isLeapYear(struct date d);
  const int   daysPerMonth[12] = {31,28,31,30,31,30,
                               31,31,30,31,30,31};

  if (isLeapYear(d) && d.month == 2)
    days = 29;
  else
    days = daysPerMonth[d.month - 1];

  return days;
}

struct date dateUpdate(struct date today) {
  struct date tomorrow;
  int         numberOfDays(struct date d);

  if (today.day != numberOfDays(today))
    tomorrow = (struct date) {today.day + 1, today.month, today.year};
  else if (today.month == 12)
    tomorrow = (struct date) {1, 1, today.year + 1};
  else
    tomorrow = (struct date) {1, today.month + 1, today.year};

  return tomorrow;
}
//--- This ends tomorrow_date_revised.c

struct timeAndDate clockKeeper(struct timeAndDate tad) {
  struct timeAndDate  updatedTad;
  struct time         timeUpdate(struct time now);
  struct date         dateUpdate(struct date today);

  updatedTad.stime = timeUpdate(tad.stime);
  if (updatedTad.stime.hour == 0 && updatedTad.stime.minute == 0 &&
    updatedTad.stime.second == 0)
    updatedTad.sdate = dateUpdate(tad.sdate);
  else
    updatedTad.sdate = tad.sdate;

  return updatedTad;
}

int main(void) {
  struct timeAndDate  time_and_date, updatedTimeAndDate;
  struct timeAndDate  clockKeeper(struct timeAndDate tad);

  printf("Enter the date (dd/mm/yyyy): ");
  scanf("%i/%i/%i", &time_and_date.sdate.day, &time_and_date.sdate.month,
&time_and_date.sdate.year);
  printf("Enter its time (hh:mm:ss): ");
  scanf("%i:%i:%i", &time_and_date.stime.hour, &time_and_date.stime.minute,
&time_and_date.stime.second);

  updatedTimeAndDate = clockKeeper(time_and_date);

  printf("\n\n");
  printf("Updated date is %i/%i/%i \n", updatedTimeAndDate.sdate.day,
updatedTimeAndDate.sdate.month, updatedTimeAndDate.sdate.year);
  printf("Updated time is %.2i:%.2i:%.2i \n", updatedTimeAndDate.stime.hour,
updatedTimeAndDate.stime.minute, updatedTimeAndDate.stime.second);

  return 0;
}
