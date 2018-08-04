/* This is my solution */
for (i = 0; i < lim - 1; i++) {
  if ((c = getchar()) != '\n')
    if (c != EOF)
      s[i] = c;
    else
      break;
  else
    break;
}

/* Another solution, more clever! */
enum {NO, YES}  condition;

i = 0;
condition = YES;
while (condition == YES)
  if (i >= lim - 1)
    condition = NO;
  else if ((c = getchar()) == '\n')
    condition = NO;
  else if (c == EOF)
    condition = NO;
  else {
    s[i] = c;
    ++i;
  }
