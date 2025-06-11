#include <stdio.h>

/* copy input to output */
int main()
{
    int c; /* c needs to be big enough to account for EOF */

    while ((c = getchar()) != EOF)
        putchar(c);
}
