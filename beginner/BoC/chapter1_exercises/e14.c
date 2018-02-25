/* Substitute #include by printf() function prototype, from stdio.h */
extern int printf(const char *__restrict__format, ...);

int main(void) {
  printf("%s\n", "from sea to shining C");

  return 0;
}
