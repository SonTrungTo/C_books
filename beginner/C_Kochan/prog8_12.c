// Program to sort array in an ascending order.
#include <stdio.h>

void sort(int array[], int numberOfElements) {
  int     i, j, initialValue;

  for (i = 0; i < numberOfElements; i++) // (numberOfElements - 1) is also ok!
    for (j = i + 1; j < numberOfElements; j++)
      if (array[i] > array[j]) {
        initialValue = array[i];
        array[i] = array[j];
        array[j] = initialValue;
      }
}

int main(void) {
  int     array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11};
  int     i;
  void    sort(int array[], int numberOfElements);

  printf("The array before sorting is:\n");
  for (i = 0; i < 16; i++)
    printf("%i  ", array[i]);

  sort(array, 16);

  printf("\n\n");
  printf("The array after sorting is:\n");
  for (i = 0; i < 16; i++)
    printf("%i  ", array[i]);

  printf("\n");

  return 0;
}
