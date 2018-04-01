/* Three versions of a program that computes the sum of the first n even integers
 *  and the sum of the first n odd integers.

 *  Version I: Use of comma operators
 *  Version II: for statements and no comma operators
 *  Version III: only while statements
 */
#include <stdio.h>

// /* Version I */
// int main(void) {
//   long    sum_even = 0, sum_odd = 0;
//   int     cnt, i, j, n;
//
//   printf("Pres 'q' to quit when prompted!\n");
//   printf("Enter the number of terms:  ");
//   while (scanf("%i", &n) == 1) {
//     for (cnt = 0, i = 1, j = 2; cnt < n; ++cnt, i += 2, j+= 2)
//       sum_even += j, sum_odd += i;
//     printf("The sum of the first %i odd is  : %li\n", cnt, sum_odd);
//     printf("The sum of the first %i even is : %li\n", cnt, sum_even);
//     printf("\nEnter the number of terms:  ");
//   }
//
//   printf("Bye!\n");
//
//   return 0;
// }

/* Version II */
int main(void) {
  long    sum_even = 0, sum_odd = 0;
  int     i, j, n;

  printf("Pres 'q' to quit when prompted!\n");
  printf("Enter the number of terms:  ");
  while (scanf("%i", &n) == 1) {
    for (i = 0; i < n; ++i)
      sum_even += (2*i + 2);
    for (j = 0; j < n; ++j)
      sum_odd += (2*j + 1);
    printf("The sum of the first %i odd is  : %li\n", i, sum_odd);
    printf("The sum of the first %i even is : %li\n", j, sum_even);
    printf("\nEnter the number of terms:  ");
  }

  printf("Bye!\n");

  return 0;
}

// /* Version III */
// int main(void) {
//   long    sum_even = 0, sum_odd = 0;
//   int     i, j, n;
//
//   printf("Pres 'q' to quit when prompted!\n");
//   printf("Enter the number of terms:  ");
//   while (scanf("%i", &n) == 1) {
//     i = 0, j = 0;
//     while (i < n) {
//       sum_even += (2*i + 2);
//       ++i;
//     }
//     while (j < n) {
//       sum_odd += (2*j + 1);
//       ++j;
//     }
//     printf("The sum of the first %i odd is  : %li\n", i, sum_odd);
//     printf("The sum of the first %i even is : %li\n", j, sum_even);
//     printf("\nEnter the number of terms:  ");
//   }
//
//   printf("Bye!\n");
//
//   return 0;
// }
