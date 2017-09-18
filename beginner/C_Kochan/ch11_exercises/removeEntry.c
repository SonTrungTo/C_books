// Exercise 4: removeEntry removes an entry from a linked list.
// It removes the entry after the one in the argument.
#include <stdio.h>

struct entry {
  int          value;
  struct entry *next;
};

void removeEntry(struct entry *listEntry) {
  struct entry *nextEntryPtr;

  nextEntryPtr = listEntry->next;
  listEntry->next = nextEntryPtr->next;
}
// We can't remove the entry pointed to by the argument because of the structure
// of the linked lists.

int main(void) {
  void          removeEntry(struct entry *listEntry);
  struct entry  n1, n2, n3, dummyList, *listPtr; // dummyList is the invisibleList in Exercise 3.

  dummyList.next = &n1;
  listPtr        = dummyList.next;

  n1.value = 100;
  n1.next  = &n2;

  n2.value = 200;
  n2.next  = &n3;

  n3.value = 300;
  n3.next  = (struct entry *) 0;

  printf("The list before removeEntry is used:\n");
  while (listPtr != (struct entry *) 0) {
    printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  removeEntry(&n1);
  listPtr = dummyList.next;

  printf("\n");
  printf("The list after removeEntry is used:\n");
  while (listPtr != (struct entry *) 0) {
    printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  removeEntry(&dummyList);
  listPtr = dummyList.next;

  printf("\n");
  printf("The list after removeEntry is used on the first element:\n");
  while (listPtr != (struct entry *) 0) {
    printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  return 0;
}
