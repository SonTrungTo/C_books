/**
*   dictionarySort(dictionary,size);
* sorts the struct dictionary in alphabetical order (asceding order).
* This should be used before implementing the binary searching algorithm.
*/
#include <stdio.h>

struct entry {
  char word[15];
  char definition[50];
};

// compareStrings() returns -1 if s1 < s2, 0 if s1 == s2 and 1 if s1 > s2, lexicographically.
int compareStrings(const char s1[], const char s2[]) {
  int   i = 0;

  while (s1[i] == s2[i] && s1[i])
    ++i;

  if (s1[i] < s2[i])
    return -1;
  else if (s1[i] > s2[i])
    return 1;
  else
    return 0;
}

void dictionarySort(struct entry dictionary[], int n) {
  int          compareStrings(const char s1[], const char s2[]);
  int          i, j;
  struct entry temp;

  for (i = 0; i < n - 1; i++)
    for (j = i + 1; j < n; j++) {
      if(compareStrings(dictionary[i].word,dictionary[j].word) == 1) {
        temp = dictionary[i];
        dictionary[i] = dictionary[j];
        dictionary[j] = temp;
      }
    }
}

int main(void) {
  struct entry dictionary[100] = {
    {"aardvark", "a burrowing African mammal"          },
    {"criminal", "a man of suffering"                  },
    {"police",   "the badass of our life"              },
    {"actors",   "people who are pretty and fuck a lot"},
    {"star",     "a blinking object on the sky"        },
    {"anime",    "stupid animation for kids"           },
    {"weaboo",   "stupid anime addicts"                },
    {"c",        "the badass programming language"     },
    {"son",      "the name of the badass author"       },
    {"ajar",     "partially opened"                    },
    {"zealot",   "the fucking Muslim idiot"            }
  }; // Note that this is ascending order lexicographically.
  void   dictionarySort(struct entry dictionary[], int n);
  int    i;

  dictionarySort(dictionary, 11);
  for (i = 0; i < 11; i++)
    printf("%s:   %s\n", dictionary[i].word, dictionary[i].definition);

  return 0;
}
