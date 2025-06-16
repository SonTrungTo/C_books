#include <stdio.h>

#define     STEP    4 /* frequency interval */
#define     SIZE    4 /* benchmarks for frequency range */
#define     IN      1 /* inside a word */
#define     OUT     0 /* outside a word */

/* Print histogram of the lengths of words HORIZONTALLY */
int main()
{
    int c, state, wlength;
    int nlength[SIZE];

    wlength = 0;
    for (int i = 0; i < SIZE; i++)
        nlength[i] = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            if (wlength > 0 && wlength <= STEP) ++nlength[0];
            else if (wlength > STEP && wlength <= (STEP * 2)) ++nlength[1];
            else if (wlength > (STEP * 2) && wlength <= (STEP * 3)) ++nlength[2];
            else if (wlength > (STEP * 3)) ++nlength[3];
            wlength = 0;
        } else {
            if (state == OUT) {
                state = IN;
            }
            if (state == IN) {
                ++wlength;
            }
        }
    }
    printf("arrays:");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", nlength[i]);
    }
    printf("\n");
}
