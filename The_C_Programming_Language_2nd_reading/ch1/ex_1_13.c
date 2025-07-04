#include <stdio.h>

#define     STEP    4 /* frequency interval */
#define     SIZE    4 /* benchmarks for frequency range */
#define     IN      1 /* inside a word */
#define     OUT     0 /* outside a word */

/* Print histogram of the lengths of words */
int main()
{
    int blankOffset, c, state, threshold, wlength, ncat;
    int nlength[SIZE];

    threshold = 0;
    wlength = 0;
    for (int i = 0; i < SIZE; i++)
        nlength[i] = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            if (wlength > (STEP * 0) && wlength <= (STEP * 1)) ++nlength[0];
            else if (wlength > (STEP * 1) && wlength <= (STEP * 2)) ++nlength[1];
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
    // Horizontal orientation
    printf("%120s", "Horizontal orientation of histogram");
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        if (i == SIZE - 1) {
            printf("> %4d", STEP * i);
        } else {
            printf("%d - %2d", STEP * i, STEP * (i + 1));
        }
        printf(" ");
        ncat = nlength[i];
        while (ncat-- > 0) {
            printf("x");
        }
        printf("\n");
    }
    printf("\n");
    // Vertical orientation
    printf("%120s", "Vertical orientation of histogram");
    printf("\n");
    for (int i = 0; i < SIZE; i++)
        if (threshold < nlength[i]) threshold = nlength[i];  /* Threshold is the highest frequency of histogram */
    while (threshold >= 0) {
        for (int i = 0; i < SIZE; i++) {
            blankOffset = i + 1;
            while (blankOffset-- > 0) printf("%3s", " ");
            if (threshold > 0 && nlength[i] >= threshold) printf("%5s", "x"); /* Print data only if the frequency is greater than or equal to the threshold */
            if (threshold == 0) {   /* Print the labels in the last loop */
                if (i == SIZE - 1) {
                    printf("> %d", STEP * i);
                } else {
                    printf("%d - %d", STEP * i, STEP * (i + 1));
                }
            }
        }
        --threshold;
        printf("\n");
    }
    printf("\n");
}
