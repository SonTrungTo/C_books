#include "ex13.h"

int roulette_choice(void) {
  return (rand() % 36);
}

int player_choice(void) {
  int   player_selection;

  printf("Input 0-35, 'o', 'e', or 'q':    ");
  scanf("%i", &player_selection);

  return player_selection;
}
