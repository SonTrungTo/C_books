#include <stdio.h>

/* Verify the expression getchar() != EOF is 0 or 1 */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
        printf("%d", c != EOF);
    printf("%d", c != EOF);
}
