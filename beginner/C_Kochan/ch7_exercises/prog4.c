// The average of 10 elements in an array(floating point values)
#include <stdio.h>

int main(void) {
  int    values[11], sum = 0, i;

  printf("This program calculates the average of 10 values.\n\n");

  for (i = 1; i < 11; i++) {
    printf("Enter the value #%i: ", i);
    scanf("%i", &values[i]);
    sum += values[i];
  }

  printf("\nThe average: %g", (float) sum / 10);

  return 0;
}
