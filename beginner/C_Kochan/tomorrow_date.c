/* Program to determine tomorrow's date
 * NOTE: This program fails to account for leap years, e.g,
 * 28th Feb, 2004 -> 1st Mar, 2004, NOT 29th Feb, 2004.
 */
#include <stdio.h>

int main(void) {
  struct date {
    int day;
    int month;
    int year;
  };

  struct date   today, tomorrow;

  const int daysPerMonth[12] = {31,28,31,30,31,30,
                               31,31,30,31,30,31};
                               // Having 0 (13 elements) hurts my eyes!

  printf("Enter today's date (dd mm yyyy): ");
  scanf("%i%i%i", &today.day, &today.month, &today.year);

  if (today.day != daysPerMonth[today.month - 1]) {
    tomorrow.day    = today.day + 1;
    tomorrow.month  = today.month;
    tomorrow.year   = today.year;
  } else if (today.month == 12) {  // end of year
    tomorrow.day    = 1;
    tomorrow.month  = 1;
    tomorrow.year   = today.year + 1;
  } else {                                            // end of month
    tomorrow.day    = 1;
    tomorrow.month  = today.month + 1;
    tomorrow.year   = today.year;
  }

  printf("\n");
  printf("Tomorrow's date is %i/%i/%i.\n", tomorrow.day,
tomorrow.month, tomorrow.year);

  return 0;
}
