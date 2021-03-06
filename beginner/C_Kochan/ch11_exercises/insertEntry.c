/**
*  insertEntry(*entry_insert, *element_after);
* This inserts a new entry in the linked list after the element specified
* in the second argument.
*
* NOTE: This program does not work. This is my first attempt at solving the problem
* and leaves me with a big headache on why the program does not work. Explanations
* are below.
*/
#include <stdio.h>

struct entry {
  int          value;
  struct entry *next;
};

void insertEntry(struct entry *listEntry, struct entry *next) {
  listEntry->next = next;
  next            = listEntry; // THIS: function cannot change the pointer 'next'
// It can only change the data element it refers to (signified by the indirection operator *).
}

int main(void) {
  struct entry n1, n2, n3, n2_3, *listPtr = &n1, *listEntry = &n2_3;
  void         insertEntry(struct entry *listEntry, struct entry *next);

  n1.value = 100;
  n1.next  = &n2;

  n2.value = 200;
  n2.next  = &n3;

  n3.value = 300;
  n3.next  = (struct entry *) 0;

  n2_3.value = 250;
  insertEntry(listEntry, n2.next);

  while (listPtr != (struct entry *) 0) {
    printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  return 0;
}
