#include <stdio.h>

#define BLANK_STR   "(blank)"
#define TABS_STR    "(tab)"
#define NEWLINE_STR "(newline)"

/* count blanks, tabs and newlines */
int main()
{
    int c;
    int bc, tc, nc;

    for (bc=0, tc=0, nc=0; (c = getchar()) != EOF;)
    {
       putchar(c);
       if (c == ' ') {
        ++bc;
        printf(BLANK_STR);
       }
       if (c == '\t')
       {
        ++tc;
        printf(TABS_STR);
       }
       if (c == '\n')
       {
        ++nc;
        printf(NEWLINE_STR);
       }
    }
    printf("\n\n");
    printf("blanks: %d, tabs: %d, newlines: %d", bc, tc, nc);
    printf("\n\n");
}
