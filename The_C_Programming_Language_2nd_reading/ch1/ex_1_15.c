#include <stdio.h>

#define     LOWER       0 /* lower limit of table */
#define     UPPER     300 /* upper limit */
#define     STEP       20 /* step size */

float temp_conversion(int input_val, char is_celsius);

/* Temperature conversion, function version */
int main()
{
    char c_flag;
    int i;

    printf("Fahrenheit----->Celsius table.\n");
    for (i = LOWER; i <= UPPER; i += STEP)
        printf("%3d %6.1f\n", i, temp_conversion(i,'c'));
    
    printf("Celsius----->Fahrenheit table.\n");
    for (i = LOWER; i <= UPPER; i += STEP)
        printf("%3d %6.1f\n", i, temp_conversion(i,'f'));

    printf("Unknown conversion table.\n");
    for (i = LOWER; i <= UPPER; i += STEP)
        printf("%3d %6.1f\n", i, temp_conversion(i,'a'));

    return 0;
}


float temp_conversion(int input_val, char is_celsius) {
    float output_val;

    if (is_celsius == 'c')
        output_val = 5 * (input_val - 32.0) / 9;
    else if (is_celsius == 'f')
        output_val = (9.0 / 5.0) * input_val + 32.0;
    else
    {
        printf("ERROR: Unknown conversion flag!\n");
        return 1;
    }

    return output_val;
}
