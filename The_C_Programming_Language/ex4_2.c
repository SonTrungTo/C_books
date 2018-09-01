#include <stdio.h>
#include <ctype.h>


double  atof(char s[]);

int main(void) {
  char   s[]  = "123.45e-6";
  char   s2[] = "123.45";
  char   s3[] = "123";

  printf("%g\n", atof(s));
  printf("%g\n", atof(s2));
  printf("%g\n", atof(s3));

  printf("Bye!\n");

  return 0;
}

double atof(char s[]) {
  double    val, power;
  int       i, sign, expo;

  i = 0;
  while (isspace(s[i]))
    ++i;
  sign = (s[i] == '-') ? -1 : 1 ;
  if (s[i] == '-' || s[i] == '+')
    ++i;
  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');
  if (s[i] == '.')
    ++i;
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }

  val = sign * val / power;

  if (s[i] == 'e' || s[i] == 'E') {
    sign = (s[++i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
      ++i;
    for (expo = 0; isdigit(s[i]); i++)
      expo = 10 * expo + (s[i] - '0');
    if (sign < 0)
      while (expo-- > 0)
        val /= 10;
    else
      while (expo-- > 0)
        val *= 10;
  }

  return  val;
}
