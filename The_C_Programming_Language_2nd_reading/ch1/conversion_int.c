#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, steps;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    steps = 20;     /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9; /* expression, integer truncates */
        // printf("%d\t%d\n", fahr, celsius);
        printf("%3d %6d\n", fahr, celsius); /* 3 digits wide for first variable, 6 digits wide for the next */
        fahr = fahr + steps;
    }
}
