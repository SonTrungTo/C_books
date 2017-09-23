// Exercise 7: sort function in ascending order, now written using pointers.
#include <stdio.h>

void sort(int *currentElement, int numberOfElements) {
  int temp, *nextElement;
  int * const arrayEnd = currentElement + numberOfElements;

  for (;currentElement < arrayEnd; ++currentElement)
    for (nextElement = currentElement + 1;nextElement < arrayEnd;++nextElement)
      if (*currentElement > *nextElement) {
        temp            = *currentElement;
        *currentElement = *nextElement;
        *nextElement    = temp;
      }
}

int main(void) {
  int     array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11}; // This is copied from prog8_12.c
  int     *element = array, *arrayEnd = element + 16;
  void    sort(int *currentElement, int numberOfElements);

  printf("Original array:\n");
  for (; element < arrayEnd ; ++element)
    printf("%i ", *element);

  sort(array,16);

  printf("\nArray sorted in ascending order:\n");
  for (element = array ; element < arrayEnd ; ++element)
    printf("%i ", *element);

  return 0;
}
