/* This is the modified prog7_2.c with the following features:
    -- Any number of responses can be entered.
    -- The value 999 is used to indicate the last response has been entered.
*/
#include <stdio.h>

int main(void) {
  int     ratingCounters[11], i, response;

  // Initializing all elements of ratingCounters
  for (i = 0; i < 11; i++)
    ratingCounters[i] = 0;

  printf("Enter your response (on a scale of 10):\n");

  // Accept the input, check for the value 999 and then its validity,
  // then add 1 to the array value if satisfied.
  for (i = 0;       ; i++) {
    scanf("%i", &response);
    if (response == 999)
        break;
    else if (response < 1 || response > 10)
        printf("Bad response: %i! Please enter another response.\n", response);
    else
        ++ratingCounters[response];
  }

  printf("\n\nRating       Number of Responses\n");
  printf("-----------  ---------------------\n");

  for (i = 1; i < 11; i++)
    printf("%4i      %14i\n", i, ratingCounters[i]);

  return 0;
}
