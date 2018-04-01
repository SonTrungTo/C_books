/* This question is weird. Hence, only rewrite of the code! */
#include <stdio.h>

int main(void) {
  int    error = -1, n;

  // do {
  //   printf("Input a positive integer:  ");
  //   scanf("%d", &n);
  //   if (error = (n <= 0))
  //     printf("\nERROR: Do it again!\n\n");
  // } while(error);

  while (error) {
    printf("Input a positive integer:  ");
    scanf("%d", &n);
    if (error = (n <= 0))
      printf("\nERROR: Do it again!\n\n");
  }

  return 0;
}
