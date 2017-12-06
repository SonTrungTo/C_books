// Exercise 2: monthName takes its argument a value of type enum month
// and returns a pointer to a character string containing the name of the month.
#include <stdio.h>
enum month {january = 1, february, march, april, may, june, july, august,
           september, october, november, december};

char *monthName(enum month aMonth) {
  char *charString;

  switch (aMonth) {
    case january:
      charString = "January";
      break;
    case february:
      charString = "February";
      break;
    case march:
      charString = "March";
      break;
    case april:
      charString = "April";
      break;
    case may:
      charString = "May";
      break;
    case june:
      charString = "June";
      break;
    case july:
      charString = "July";
      break;
    case august:
      charString = "August";
      break;
    case september:
      charString = "September";
      break;
    case october:
      charString = "October";
      break;
    case november:
      charString = "November";
      break;
    case december:
      charString = "December";
      break;
    default:
      charString = "Bad entry for month.";
      break;
  }

  return charString;
}

int main(void) {
  enum month nameOfMonth;
  char *monthName(enum month aMonth);

  printf("Enter the number of the month: ");
  scanf("%i", &nameOfMonth);

  printf("\n\n");
  printf("%s\n", monthName(nameOfMonth));

  return 0;
}
