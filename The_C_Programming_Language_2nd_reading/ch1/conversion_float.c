#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit of temperature table */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);          /* Note the arithmetic expression conversion: int -> float */
        printf("%3.0f %6.1f\n", fahr, celsius);     /* 3 characters wide, no decimal point, no fraction digits  6 characters wide, with 1 digit after the decimal point */
        /* %f print the number as floating point */
        /* %.2f print as floating point, 2 chatacters after decimal point */
        /*  
            %o: octal;
            %x: hexadecimal;
            %c: character;
            %s: character string;
            %%: % itself;
        */
        fahr = fahr + step;
    }    
}
