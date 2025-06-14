#include <stdio.h>

#define      IN     1 /* Inside a word */
#define     OUT     0 /* Outside a word */

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            putchar('\n');
        } else if (state == OUT)
            state = IN;

        if (state == IN) putchar(c);
    }
}
