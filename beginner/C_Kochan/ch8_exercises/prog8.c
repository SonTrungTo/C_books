/*  Program to calculate the root of ax^2 + bx + c.
*/
#include <stdio.h>

int main(void) {
  int               a, b, c;
  double            root1, root2;
  double            squareRoot(double x, double epsilon);

  printf("a = ");
  scanf("%i", &a);
  printf("b = ");
  scanf("%i", &b);
  printf("c = ");
  scanf("%i", &c);
  printf("\n\n");

  if (b*b - 4*a*c < 0) {
    printf("The roots are imaginary numbers.\n");
  } else if(a == 0) {
    printf("root1 = root2 = %i\n", - c / b);
  }
  else{
    root1 = (-b + squareRoot(b*b - 4*a*c, 0.0000001)) / (2 * a);
    root2 = (-b - squareRoot(b*b - 4*a*c, 0.0000001)) / (2 * a);
    printf("root1 = %g\n", root1);
    printf("root2 = %g\n", root2);
  }


  return 0;
}

// squareRoot is taken from prog5+6.
// We modified squareRoot a little bit so that the guess is not displayed!
// and if x < 0 for squareRoot(x), then program terminates!
double absoluteValue(double x) {
  if (x < 0)
    x = -x;

  return x;
}

double squareRoot(double x, double epsilon) {
  double  guess = 1;

  if (x < 0) {
    printf("WARNING: arg of squareRoot is negative. Exit calculation!\n");
    return  -1;
  }

  while (absoluteValue(guess*guess / x - 1) >= epsilon)
    guess = (x / guess + guess) / 2;

  return guess;
}
