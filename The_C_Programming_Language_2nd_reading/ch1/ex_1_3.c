#include <stdio.h>

/* print a heading above the temperature conversion program */
int main()
{
    int i = 1;
    while (i <= 6)
    {
        printf("-");
        i = i + 1;
    }
    printf("Temperature conversion program (Fahrenheit to Celsius)");
    while (i <= 12)
    {
        printf("-");
        i = i + 1;
    }
    printf("\n");

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit of temperature table */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%24.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
