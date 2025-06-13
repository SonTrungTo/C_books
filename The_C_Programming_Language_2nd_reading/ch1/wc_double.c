#include <stdio.h>

/* count characters in input; 2nd version */
int main()
{
    double wc;

    for (wc = 0; getchar() != EOF; ++wc)
        ;
    printf("%.0f\n", wc);
}
