#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>

char *inversion(int k);
int   conversion(char *s);
void  bit_print(int n);

int main(void) {
  char   entry[9];

  printf("Input a string of decimal digits:  ");
  while (scanf("%s", entry) == 1) {
    printf("%s = ", entry);
    bit_print(conversion(entry));
    printf("Unpacking data gives %s\n", inversion(conversion(entry)));
    putchar('\n');
  }

  printf("Program Finished! Bye...\n\n");

  return 0;
}

int conversion(char *s) {
  char   *p;
  int    a = 0;
  int    digit;
  int    count = 0; // Check to prevent overload buffer.

  for (p = s; *p != '\0'; ++p) {
    ++count;
    digit = *p - 48;
    if (digit < 0 || digit > 9) {
      printf("Invalid entry conversion!\n");
      exit(1);
    }
    a <<= 4;
    a |= digit;
  }

  assert(count <= 8);
  return a;
}

char *inversion(int k) {
  char  s[9], *ptr_s = s;
  char  mask = 15;
  int   i, j;

  s[8] = '\0';
  for (i = 0, j = 7; i <= sizeof(int) * CHAR_BIT && j >= 0; i+=4, --j) {
    s[j] = ((k >> i) & mask) + 48;
  }

  return ptr_s;
}

void bit_print(int n) {
  int   size = sizeof(int) * CHAR_BIT;
  int   mask = 1 << (size - 1);
  int   i;

  for (i = 1; i <= size; i++) {
    putchar((n & mask) == 0 ? '0' : '1');
    n <<= 1;
    if (i % 4 == 0 && i < size)
      putchar(' ');
  }
  putchar('\n');
}
