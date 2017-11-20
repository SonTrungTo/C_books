// Program 13.1: isEven() returns YES if an argument is even and NO if it is odd.
// I have modified this program straight from the textbook to make it look less stupid!
#include <stdio.h>

#define YES 1
#define NO  0

void isEven(int number) {
  int answer;

  if (number % 2 == 0)
    answer = YES;
  else
    answer = NO;

  if (answer == YES)
    printf("YES\n");
  else
    printf("NO\n");
}

int main(void) {
  void isEven(int number);

  isEven(17);
  isEven(20);

  return 0;
}
