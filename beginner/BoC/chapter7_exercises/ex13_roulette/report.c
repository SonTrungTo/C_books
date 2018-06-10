#include "ex13.h"

void report_and_tabulate(outcome result, int bet, int gain, int *count_ptr,
                        int *net_gain_ptr) {
  switch (result) {
    case win_small:
      ++*count_ptr;
       gain += (2 * bet + bet);
      *net_gain_ptr += gain;
      printf("%27sYou win %i dollars\n\n\n", "", gain);
      break;
    case win_big:
      ++*count_ptr;
       gain += (35 * bet + bet);
      *net_gain_ptr += gain;
      printf("%27sYou win %i dollars\n\n\n", "", gain);
      break;
    case lose:
     ++*count_ptr;
      gain -= bet;
     *net_gain_ptr += gain;
     printf("%27sYou lose %i dollars\n\n\n", "", bet);
     break;
    default:
      printf("\nERROR: Unexpected result!\n\n\n");
      exit(1);
  }
}

void prn_game_status(int net_gain, int count) {
  printf("%27sBET STATUS\n", "");
  printf("%15s%25s\n", "", "-------------------------");
  printf("Total net gain: %i\n", net_gain);
  printf("Number of bets: %i\n", count);
  printf("\n\n\n");
}
