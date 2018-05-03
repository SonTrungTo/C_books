#include <stdio.h>
#include <string.h>

void    tell_me(int f(const char *, const char *));

int main(void) {
  tell_me(strcmp);
  tell_me(main);
  return 0;
}

void    tell_me(int f(const char *, const char *)) {
  if (f == strcmp)
    printf("Address of strcmp(): %p\n", f);
  else
    printf("Function addresss: %p\n", f);
}
