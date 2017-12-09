// Header file for working with dates

#include <stdbool.h>
#include <stdio.h>

// Enumerated data type
enum kMonth {January = 1, February, March, April, May, June, July, August, September,
            October, November, December};
enum kDay   { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

struct date {
  enum kDay    day;
  enum kMonth  month;
  int          year;
};

// Date type
typedef struct date Date;

// Function prototype declarations that work with dates
Date dateUpdate(Date today);
int  numberOfDays(Date d);
bool isLeapYear(Date d);

// Macro to set a date in a structure
#define setDate(s,dd,mm,yyyy) s = (Date) {dd,mm,yyyy}

// External variable reference
extern Date todaysDate;
