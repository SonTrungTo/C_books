/**
*   Using linked lists
*/
#include <stdio.h>

int main(void) {
  struct entry {
    int          value;
    struct entry *next;
  };

  struct entry n1, n2, n3;
  int          i;

  n1.value = 100;
  n2.value = 200;
  n3.value = 300;

  n1.next = &n2;
  n2.next = &n3;

  i = n1.next->value;
  printf("%i  ", i);

  printf("%i\n", n2.next->value);

  return 0;
}

/* P/S: I think the figures 11.4, 11.5, 11.6, 11.7 are all wrong: the arrow should
* have pointed to the structures of entry(n1,n2,n3,...), NOT their value member.
*
* line 5 from page 248 should be, "... Program 11.6 displays the value member of the entry
* structure that is..."
*/
