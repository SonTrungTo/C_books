/* Accumulate the sum of all salaries and taxes printed */
#include <stdio.h>

int main(void) {
  double    fed_tax, state_tax, salary, s_f = 0, s_st = 0, s_s = 0;

  printf("%s\n", "Press \"q\" at any time to quit and see accumulated.");
  printf("Tell me your salary: ");
  while ( scanf("%lf", &salary) == 1 ) {
    fed_tax   = salary * 0.17;
    state_tax = salary * 0.03;
    printf("%19s%22.5lf\n%19s%22.5lf\n%19s%22.5lf\n",
      "Salary: ",    salary,
      "Federal tax:",fed_tax,
      "State tax:",  state_tax);
    s_f  += fed_tax;
    s_st += state_tax;
    s_s  += salary;
    printf("Tell me your next salary: ");
  }

  printf("\n%29s%22.5lf\n%29s%22.5lf\n%29s%22.5lf\n",
     "Accumulated salaries:", s_s,
     "Accumulated federal taxes:", s_f,
     "Accumulated state taxes:", s_st);

  return 0;
}
