#include "p_r_s.h"

void prn_final_status(int win_cnt, int lose_cnt) {
  if (win_cnt > lose_cnt)
    printf("YOU WIN!\n\n");
  else if (win_cnt < lose_cnt)
    printf("YOU LOSE!\n\n");
  else
    printf("DRAW!\n\n");
}

void prn_game_status(int win_cnt, int lose_cnt, int tie_cnt) {
  printf("\n%s\n%s%4d\n%s%4d\n%s%4d\n%s%4d\n\n",
"  GAME STATUS:  ",
"     WIN:       ", win_cnt,
"    LOSE:       ", lose_cnt,
"     TIE:       ", tie_cnt,
"   TOTAL:       ", win_cnt + lose_cnt + tie_cnt );
}

void prn_help(void) {
  printf("\n%s\n",
"The following characters can be used for input:\n"
"     p   for paper\n"
"     r   for rock\n"
"     s   for scissors\n"
"     g   print game status\n"
"     h   help, print this list\n"
"     i   reprint the instructions\n"
"     q   quit this game\n" );
}

void prn_instructions(void) {
  printf("\n%s\n",
"PAPER, ROCK, SCISSORS:\n"
"  In this game, \"p,\" is for paper, \"r,\" is for rock and \"s,\"\n"
"is for scissors\n"
"  Both the player and the machine\n"
"will choose one of p, r, or s."
" If two choices are the same,\n"
"   then the game is a tie. Otherwise:\n"
"       \"paper covers the rock\"    (a win for the paper),\n"
"       \"rock breaks the scissors\" (a win for the rock),\n"
"       \"scissors cut the paper\"   (a win for the scissors).\n"
"\n"
"  There are other allowable inputs:\n"
"       g   for game status     (the number of win so far),\n"
"       h   for help,\n"
"       i   for instructions    (reprint these instructions),\n"
"       q   for quit            (to quit the game).\n"
"\n"
"   This game is played repeatedly until q is entered.\n"
"\n"
"   Good luck!\n" );
}
