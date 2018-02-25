// because 'statement' can be either a compound statement,{}, or a single
// statement ending with semicolon.
int main(void) {
  int    i;

  for (i = 0; i < 3; i++) {}
  for (i = 0; i < 3; i++) { ; ; ; }

  return 0;
}
