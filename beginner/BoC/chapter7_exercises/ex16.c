#include "ex.h"

short storeDate(short day, short month, short year);
short unpackDate(short raw, short k); /* k == 0, 1, 2 */

int main(void) {
  short day, month, year;
  short dateBits;

  printf("Enter dd/mm/yy: ");
  scanf("%hd/%hd/%hd", &day, &month, &year);

  printf("\n\nThe date is stored as 16 bits:  ");
  dateBits = storeDate(day, month, year);
  bit_print_16(dateBits);
  printf("\n\n");

  printf("When extracted, the date is: %hd/%hd/%hd\n\n",
unpackDate(dateBits, 2), unpackDate(dateBits, 1), unpackDate(dateBits, 0));

  return 0;
}

short storeDate(short day, short month, short year) {
  int    date = 0;

  if ((day > 31 || day <= 0) || (month > 12 || month <= 0) || (year > 99 || year < 0)) {
    printf("\nERROR: Invalid date.\n\n");
    exit(1);
  }

  date  |= day;
  date <<= 4;
  date  |= month;
  date <<= 7;
  date  |= year;

  return date;
}

short unpackDate(short raw, short k) {
  short  date;

  switch (k) {
    case 0:
      date = raw & 127;
      break;
    case 1:
      date = (raw >> 7) & 15;
      break;
    case 2:
      date = (raw >> 11) & 31;
      break;
    default:
      printf("\nERROR: Unidentified type of date.\n\n");
      exit(1);
  }

  return date;
}
