// Exercise 5: Constructing a new structure: the double linked list
// Exercise 6: Constructing two functions: insertEntry and removeEntry.
#include <stdio.h>
#include <stdbool.h>

struct entry {
  int          value;
  struct entry *next;
  struct entry *previous;
};

// We make insertEntry add pointer to the new entry after the pointer to the old one
void insertEntry(struct entry *newEntry, struct entry *oldEntry) {
    newEntry->previous       = oldEntry;
    newEntry->next           = oldEntry->next;
    oldEntry->next           = newEntry;
    newEntry->next->previous = newEntry;
  }

void removeEntry(struct entry *listEntry) {
  listEntry->previous->next = listEntry->next; // This removes listEntry from the list.
  listEntry->next->previous = listEntry->previous;
}

int main(void) {
  struct entry n1, n2, n3, n2_3, upperDummyList, lowerDummyList;
  struct entry *listNextPtr;
  void insertEntry(struct entry *newEntry,struct entry *oldEntry);

  upperDummyList.next     = &n1;
  upperDummyList.previous = (struct entry *) 0;
  listNextPtr = upperDummyList.next;

  n1.value    = 100;
  n1.next     = &n2;
  n1.previous = &upperDummyList;

  n2.value    = 200;
  n2.next     = &n3;
  n2.previous = &n1;

  n3.value    = 300;
  n3.next     = &lowerDummyList;
  n3.previous = &n2;

  lowerDummyList.next       = (struct entry *) 0;
  lowerDummyList.previous   = &n3;

  n2_3.value = 23579;

  printf("Next-order double linked list:\n");
  while (listNextPtr->next != 0) {
    printf("%i\n", listNextPtr->value);
    listNextPtr = listNextPtr->next;
  }

  insertEntry(&n2_3,&n3);
  listNextPtr = upperDummyList.next;

  printf("Inserting n2_3 after element n3 gives:\n");
  while (listNextPtr->next != 0) {
    printf("%i\n", listNextPtr->value);
    listNextPtr = listNextPtr->next;
  }

  removeEntry(&n3);
  removeEntry(&n2_3);
  removeEntry(&n1);
  listNextPtr     = upperDummyList.next;

  printf("Removing n2_3, n3 and n1 from the list:\n");
  while (listNextPtr->next != 0) {
    printf("%i\n", listNextPtr->value);
    listNextPtr = listNextPtr->next;
  }

  return 0;
}
