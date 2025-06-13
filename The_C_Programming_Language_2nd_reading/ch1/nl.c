#include <stdio.h>

/* count lines in input */
int main()
{
    int c, nl;

    for (nl = 0; (c = getchar()) != EOF;)
        if (c == '\n') ++nl;
    // increment one to account for EOF
    ++nl;
    /* Alternative to for loop */
    // nl = 0;
    // while ((c = getchar()) != EOF)
    // {
    //    if (c == '\n')
    //    {
    //     ++nl;
    //    }       
    // }
    
    printf("%d\n", nl);
}
