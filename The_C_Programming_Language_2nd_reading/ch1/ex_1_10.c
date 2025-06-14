#include <stdio.h>

/* Copying input to output, replacing each
* tab       -> \t
* backspace -> \b
* backslash -> \\
*/
int main()
{
    int c, nt, nb, ns;
    for (nt = 0, nb = 0, ns = 0; (c = getchar()) != EOF; nt = 0, nb = 0, ns = 0)
    {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            ++nt;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            ++nb;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            ++ns;
        }       
        if (nt == 0 && nb == 0 && ns == 0) putchar(c);
    }
}
