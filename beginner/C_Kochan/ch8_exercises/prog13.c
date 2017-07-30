/* prog8_12.c modified: The sort function is now capable of either
 * ascending or descending.
 * ascending := true; descending:= false.
 */
#include <stdio.h>
#include <stdbool.h>

void sort(int array[], int numberOfElements, bool isAscending) {
  int    i, j, temp;

  if (isAscending == true) {
    for (i = 0; i < numberOfElements - 1; i++)
      for (j = i + 1; j < numberOfElements; j++)
        if (array[j] < array[i]) {
        temp     = array[i];
        array[i] = array[j];
        array[j] = temp;
        }
  } else if (isAscending == false) {
      for (i = 0; i < numberOfElements - 1; i++)
        for (j = i + 1; j < numberOfElements; j++)
          if (array[j] > array[i]) {
            temp     = array[i];
            array[i] = array[j];
            array[j] = temp;
          }
  }
    else
      printf("Need to know the order of sorting.\n");
}

int main(void) {
  int     array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11};
  int     i;
  void    sort(int array[], int numberOfElements, _Bool isAscending);

  printf("The array before sorting is:\n");
  for (i = 0; i < 16; i++)
    printf("%i  ", array[i]);

  printf("\n\n");
  printf("The array in ascending order is: \n");
  sort(array, 16, true);
  for (i = 0; i < 16; i++)
    printf("%i ", array[i]);

  printf("\n\n");
  printf("The array in descending order is: \n");
  sort(array, 16, false);
  for (i = 0; i < 16; i++)
    printf("%i ", array[i]);

  return 0;
}
