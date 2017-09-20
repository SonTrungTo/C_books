// Exercise 5: Constructing a new structure: the double linked list
#include <stdio.h>

struct entry {
  int          value;
  struct entry *next;
  struct entry *previous;
};

int main(void) {
  struct entry n1, n2, n3, *listNextPtr = &n1, *listPreviousPtr = &n3;

  n1.value    = 100;
  n1.next     = &n2;
  n1.previous = (struct entry *) 0;

  n2.value    = 200;
  n2.next     = &n3;
  n2.previous = &n1;

  n3.value    = 300;
  n3.next     = (struct entry *) 0;
  n3.previous = &n2;

  printf("Next-order double linked list:\n");
  while (listNextPtr != 0) {
    printf("%i\n", listNextPtr->value);
    listNextPtr = listNextPtr->next;
  }

  printf("Previous-order double linked list:\n");
  while (listPreviousPtr != 0) {
    printf("%i\n", listPreviousPtr->value);
    listPreviousPtr = listPreviousPtr->previous;
  }

  return 0;
}
