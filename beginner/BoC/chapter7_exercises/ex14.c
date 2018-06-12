#include <stdio.h>
#include <stdlib.h>

enum    month {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
typedef enum month  month;

month previous_month(month current_month);
void  prn_month_name(month name_month);

int main(void) {
  month  current_month;

  printf("Previous month%27sCurrent month\n", "");
  printf("--------------%27s-------------\n\n\n", "");

  for (current_month = jan; current_month <= dec; current_month++) {
    prn_month_name(previous_month(current_month));
    printf("%35s", "");
    prn_month_name(current_month);
    putchar('\n');
  }

  return 0;
}

month previous_month(month current_month) {
  month   previous_month;

  current_month %= 12;
  if (current_month == jan)
    previous_month = dec;
  else
    previous_month = current_month - 1;

  return previous_month;
}

void prn_month_name(month name_month) {
  switch (name_month) {
    case jan:
      printf("January%1s", "");
      break;
    case feb:
      printf("February");
      break;
    case mar:
      printf("March%3s", "");
      break;
    case apr:
      printf("April%3s", "");
      break;
    case may:
      printf("May%5s", "");
      break;
    case jun:
      printf("June%4s", "");
      break;
    case jul:
      printf("July%4s", "");
      break;
    case aug:
      printf("August%2s", "");
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
