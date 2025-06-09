#include <stdio.h>

int main()
{
    for (int fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0)); /* I like the conversion after the substraction expression. I am aware of the book's conversion after the multiplication expression */
}
