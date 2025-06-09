#include <stdio.h>

/* Convert Celsius to Fahrenheit */
int main()
{
    float fahr;
    int celsius, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3d %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }    
}
