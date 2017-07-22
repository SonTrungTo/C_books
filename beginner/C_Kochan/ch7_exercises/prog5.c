// Output expected: number[j] = sum(i) where i < j
#include <stdio.h>

int main(void) {
  int number[10]={1,0,0,0,0,0,0,0,0,0};
  int i, j;

  for (j = 0; j < 10; j++)
    for (i = 0; i < j; i++)
      number[j] += number[i];

  for (j = 0; j < 10; j++)
    printf("%i ", number[j]);

  printf("\n");

  return 0;
}
