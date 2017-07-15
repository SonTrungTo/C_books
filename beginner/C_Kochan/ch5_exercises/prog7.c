// What is the purpose of . before field width specification?
#include <stdio.h>

int main(void) {
  int dollars, cents, count;

  for (count = 0; count <= 10; count++) {
    printf("Enter dollars: ");
    scanf("%i", &dollars);
    printf("Enter cents: ");
    scanf("%i", &cents);
    printf("$%i.%.2i\n\n", dollars, cents);
  }         /* Note1 */

  return 0;
}

/* Note1: . makes sure that it puts 0 digits into empty space
made by field width specification(left/right justified)
  For this case, . is a necessity. Otherwise, 2.01 becomes 2.1
  Hence, putting . before field width specification of a unit before
  its ´´breaking points'', e.g, 1 dollar = 100 cents: 100 is its breaking
  point. Therefore, cent is %.2i in printf                                 */
