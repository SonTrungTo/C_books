/* Program to convert pounds and ounces to kilograms and grams
*  Author: Son To.
*/
#include <stdio.h>

#define POUND_TO_OUNCES 16.0    /* Automatic conversion occurs below! */
#define OUNCE_TO_POUNDS (1 / (POUND_TO_OUNCES))
#define KG_TO_POUND     2.2046226218
#define POUND_TO_KG     (1 / (KG_TO_POUND))
#define KG_TO_GRAMS     1000

int main(void) {
  double pounds, ounces, kilograms, grams;

  printf("%s", "Enter amount of pounds: ");
  scanf("%lf", &pounds);
  printf("%s", "Enter amount of ounces: ");
  scanf("%lf", &ounces);

  kilograms = (ounces * OUNCE_TO_POUNDS + pounds) * POUND_TO_KG;
  grams     = kilograms * KG_TO_GRAMS;

  printf("%s%lf\n%s%lf\n",
      "The equivalent amount of kilograms is: ", kilograms,
      "The equivalent amount of grams is: ", grams);

  return 0;
}
