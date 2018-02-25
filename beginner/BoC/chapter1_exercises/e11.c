// Hello name, next year you will be next_age
#include <stdio.h>
#include <stdlib.h>
#define  MAX_LENGTH 30

int main(void) {
  int    age, next_age, i;
  char   c, name[MAX_LENGTH];

  printf("%s", "Your name:   ");
  for (i = 0; (c = getchar()) != '\n'; i++) {
    name[i] = c;
  }
  name[i] = '\0';
  printf("%s", "Your age:    ");
  if (scanf("%d", &age) != 1) {
    printf("You forget to type in your age.\n");
    exit(1);
  }

  next_age = age + 1;
  printf("\n\n%s%s%s%2d\n\n",
  "Hello ", name, ", next year you will be ", next_age);

  if (next_age >= 80 && next_age <= 99) {
    printf("WOW! You have lived for so long!\n\n");
  }
  else if (next_age >= 100) {
    printf("YOU MONSTER!!!!\n");
    printf("P/S: This means as a joke! :) And congrats!\n\n");
  }

  return 0;
}
