#include <stdio.h>

#define NCHAR_SIZE 26 /* Size of all alphabet characters in English */

/* Print a histogram of the frequencies of different characters */
int main()
{
    int c, nb, nothers;
    int nchars[NCHAR_SIZE];

    nb = 0;
    nothers = 0;
    for (int i = 0; i < NCHAR_SIZE; i++)
       nchars[i] = 0;

    // Need to factor in uppercase vs lowercase letters
    printf("a: %d\n", 'a');
    printf("b: %d\n", 'b');
    printf("z: %d\n", 'z');
    printf("A: %d\n", 'A');
    printf("B: %d\n", 'B');
    printf("Z: %d\n", 'Z');
    printf("C: %c\n", 91);

    // while ((c = getchar()) != EOF) {
    //     if (c >= 'a')
    //     {
    //         /* code */
    //     }
    //     else if (condition)
    //     {
    //         /* code */
    //     }
    //     else
    //     {
    //         /* code */
    //     }

    // }
}
