#include <stdio.h>

/* Copy its input to its output, replacing each string of one or more blanks by a single blank */
int main()
{
    int c, nb;

    for (nb = 0; (c = getchar()) != EOF;)
    {
       if (c == ' ' || c == '\t') ++nb;
       else nb = 0;
       if (nb == 0) putchar(c);
       if (nb == 1) putchar(' ');
    }
}
