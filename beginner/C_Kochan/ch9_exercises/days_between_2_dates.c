/* Program to calculate number of days elapsed between two dates.
 * The Formlula is Diff = N_1 - N_2 where,
 *
 * N = 1461 x f(year,month) / 4 + 153 x g(month) / 5 + day
 *
 * in which,
 * f(year,month) = year - 1                 if month <= 2
 *               = year                     otherwise
 *
 * g(month)      = month + 13               if month <= 2
 *               = month + 1                otherwise
 *
 * The above formula is applicable for dates after March 1, 1900.
 * 1 must be added to N for dates from March 1, 1800 to Feb 28, 1900
 * 2 must be added to N for dates from March 1, 1700 to Feb 28, 1800
 */
#include <stdio.h>

struct date {
  int day;
  int month;
  int year;
};

int f(int year, int month) {

  if (month <= 2)
    year -= 1;

  return year;
}

int g(int month) {

  if (month <= 2)
    month += 13;
  else
    month += 1;

  return month;
}

int N(struct date  d) {
  int   result;
  int   f(int year, int month), g(int month);

  result = 1461 * f(d.year, d.month) / 4 + 153 * g(d.month) / 5 + d.day;

  if (d.year == 1800 && d.month >= 3 || d.year > 1800 && d.year < 1900
  || d.year == 1900 && d.month < 3)
    result += 1;
  else if (d.year == 1700 && d.month >= 3 || d.year > 1700 && d.year < 1800
  || d.year == 1800 && d.month <=2)
    result += 2;

  return result;
}

int main(void) {
  struct date  firstDate, secondDate;
  int          N(struct date  d);

  printf("Enter the first date (dd/mm/yyyy): ");
  scanf("%i/%i/%i", &firstDate.day, &firstDate.month, &firstDate.year);
  printf("Enter the second date (dd/mm/yyyy): ");
  scanf("%i/%i/%i", &secondDate.day, &secondDate.month, &secondDate.year);

  printf("\n");
  printf("The number of days elapsed between %i/%i/%i ", firstDate.day,
firstDate.month, firstDate.year);
  printf("and %i/%i/%i ", secondDate.day, secondDate.month, secondDate.year);
  printf("is %i day(s) \n", N(secondDate) - N(firstDate));

  return 0;
}
