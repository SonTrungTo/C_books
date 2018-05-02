#include <stdio.h>
#include <string.h>

#define       N       3

char *foreign[N], *english[N];

void translate(char *a[], char *b[]);

int main(void) {
  int i;

  foreign = {"Mina", "olen", "Son To"};
  for (i = 0; i < N; i++)
    printf("%s%s", foreign[i], (foreign[i + 1] != '\0') ? " " : "\n");
  translate(foreign, english);
  for (i = 0; i < N; i++) {
    printf("%s%s", english[i], (english[i + 1] != '\0') ? " " : "\n");
  }

  return 0;
}

void translate(char *a[], char *b[]) {
  int   i;

  for (i = 0; i < N; i++) {
    switch (a[i]) {
      case "Mina":
        b[i] = "I";
        break;
      case "olen":
        b[i] = "am";
        break;
      default:
        b[i] = a[i];
        break;
    }
  }
}
