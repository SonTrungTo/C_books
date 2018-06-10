#include "ex13.h"

int     net_gain = 0, bet = 1, gain = 0, count = 0;
outcome result;
int player_selection, roulette_selection;

int main(void) {
  srand(time(NULL));
  printf("You are betting 1 dollar.\n");
  while ((player_selection = player_choice()) != 'q') {

    if (player_selection >= 0 && player_selection <= 35 || player_selection == 'e'
  || player_selection == 'o') {
      roulette_selection = roulette_choice();
      result = compare(player_selection, roulette_selection);
      report_and_tabulate(result, bet, gain, &count, &net_gain);
    } else
      prn_game_status(net_gain, count);
  }

  printf("Exiting the program! Bye!\n");

  return 0;
}
