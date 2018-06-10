#include "ex13.h"

outcome compare(int player_choice, int roulette_choice) {
  outcome   result;

  if (player_choice >= 0 && player_choice <= 35)
    result = player_choice == roulette_choice ? win_big : lose;
  else if (player_choice == 'e' && roulette_choice != 0)
    result = roulette_choice % 2 == 0 ? win_small : lose;
  else if (player_choice == 'o' && roulette_choice != 0)
    result = roulette_choice % 2 == 0 ? lose : win_small;
  else if (roulette_choice == 0)
    result = lose;
  else {
    printf("\nERROR: Invalid player choice!\n");
    exit(1);
  }

  return result;
}
