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
// if next is true and before the pointer to the old one if otherwise.
void insertEntry(struct entry *newEntry, struct entry *oldEntry, bool next) {
  if (next) {
    newEntry->next = oldEntry->next;
    oldEntry->next = newEntry;
  } else {
    newEntry-> previous = oldEntry->previous;
    oldEntry-> previous = newEntry;
  }
}

void removeEntry(struct entry *listEntry) {
  
}

int main(void) {
  struct entry n1, n2, n3, n2_3, *listNextPtr = &n1, *listPreviousPtr = &n3;
  void insertEntry(struct entry *newEntry,struct entry *oldEntry,bool next);

  n1.value    = 100;
  n1.next     = &n2;
  n1.previous = (struct entry *) 0;

  n2.value    = 200;
  n2.next     = &n3;
  n2.previous = &n1;

  n3.value    = 300;
  n3.next     = (struct entry *) 0;
  n3.previous = &n2;

  n2_3.value = 23579;

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

  listNextPtr = &n1;
  listPreviousPtr = &n3;
  insertEntry(&n2_3,&n2,true);
  insertEntry(&n2_3,&n2,false);

  printf("Inserting n2_3 after element n2 gives:\n");
  while (listNextPtr != 0) {
    printf("%i\n", listNextPtr->value);
    listNextPtr = listNextPtr->next;
  }

  printf("Inserting n2_3 before element n2 gives:\n");
  while (listPreviousPtr != 0) {
    printf("%i\n", listPreviousPtr->value);
    listPreviousPtr = listPreviousPtr->previous;
  }

  return 0;
}
