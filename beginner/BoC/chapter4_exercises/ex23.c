/* square root of the discriminant */
/* roots of polynomials */
#include <stdio.h>
#include <math.h>

int main(void) {
  double      a, b, c, dis;

  printf("The equation is a*x^2 + b*x + c. Enter a, b, c:  ");
  scanf("%lf%lf%lf", &a, &b, &c);
  dis = b*b - 4 * a * c;
  if (a == 0 && b == 0)
    if (c == 0)
      printf("Infinite solutions.\n");
    else
      printf("No solutions.\n");
  else if (a == 0 && b != 0)
    printf("Unique solution: root1 = root2 = %lf\n", -c / b);
  else
    if (dis > 0)
      printf("%s%lf\n%s%lf\n",
    "Two real roots:  root1 = ", 1/(2*a) * (-b + sqrt(dis)),
    "                 root2 = ", 1/(2*a) * (-b - sqrt(dis)) );
    else if (dis == 0)
      printf("%s%lf\n",
    "Two real roots:  root1 = root2 = ", -b / (2*a) );
    else
      printf("%s%lf%s%lf\n%s%lf%s%lf\n",
    "Two complex roots:  root1 = ", -b/(2*a), " + i * ", sqrt(-dis)/(2*a),
    "                    root2 = ", -b/(2*a), " - i * ", sqrt(-dis)/(2*a));

  return 0;
}
