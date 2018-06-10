#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum outcome  { win_small, win_big, lose };

typedef   enum outcome  outcome;

void      prn_game_status(int net_gain, int count);
void      report_and_tabulate(outcome result, int bet, int gain, int *count_ptr,
                            int *net_gain_ptr);
outcome   compare(int player_choice, int roulette_choice);
int       roulette_choice(void);
int       player_choice(void);
