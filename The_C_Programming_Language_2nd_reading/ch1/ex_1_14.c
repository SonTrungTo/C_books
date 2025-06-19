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

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') ++nchars[c - 'a'];
        else if (c >= 'A' && c <= 'Z') ++nchars[c - 'A'];
        else if (c == ' ' || c == '\t' || c == '\n') ++nb;
        else ++nothers;
    }

    printf("alphabets: ");
    for (int i = 0; i < NCHAR_SIZE; i++)
    {
        printf("%d ", nchars[i]);
    }
    printf("\n");
    printf(", blanks: %d\n", nb);
    printf(", others: %d\n", nothers);
}
