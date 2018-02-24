/* Illustrate the use of array: Type in 5 scores and sort them */
#include <stdio.h>
#define CLASS_SIZE 5

int main(void) {
  int   i, j, scores[CLASS_SIZE], sum = 0, tmp;

  printf("Input %d scores: ", CLASS_SIZE);
  for (i = 0; i < CLASS_SIZE; i++) {
    scanf("%d", &scores[i]);
    sum += scores[i];
  }

  for (i = 0; i < CLASS_SIZE - 1; i++) { // bubble sort
    for (j = CLASS_SIZE - 1; j > i; j--) {
      if (scores[j - 1] < scores[j]) {
        tmp = scores[j - 1];
        scores[j - 1] = scores[j];
        scores[j] = tmp;
      }
    }
  }

  printf("\nOrdered scores:\n\n");
  for (i = 0; i < CLASS_SIZE; i++)
    printf("    scores[%d] = %5d\n", i, scores[i]);
  printf("\n%18d%s\n%18.1f%s\n\n",
    sum, " is the sum of all scores",
    (double) sum / CLASS_SIZE, " is the class average");

  return 0;
}
