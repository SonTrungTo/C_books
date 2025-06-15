#include <stdio.h>

#define NDIGIT_SIZE 10 /* size of digits array */

/* count digits, white space, others */
int main()
{
    int c, nwhite, nother;
    int ndigit[NDIGIT_SIZE];

    nwhite = nother = 0;
    for (int i = 0; i < NDIGIT_SIZE; i++)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];
        }
        else if (c == ' ' || c == '\t' || c == '\n') {
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    printf("digits =");
    for (int i = 0; i < NDIGIT_SIZE; i++)
        printf(" %d", ndigit[i]);
    printf(", white space = %d", nwhite);
    printf(", other = %d\n", nother);
}
