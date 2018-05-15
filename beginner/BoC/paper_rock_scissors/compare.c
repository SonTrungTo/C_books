#include "p_r_s.h"

outcome compare(p_r_s   player_choice,
        p_r_s   machine_choice) {
  outcome     result;

  if (player_choice == machine_choice)
    return  tie;
  switch (player_choice) {
    case paper:
      result = (machine_choice == scissors) ? lose : win;
      break;
    case rock:
      result = (machine_choice == paper) ? lose : win;
      break;
    case scissors:
      result = (machine_choice == rock) ? lose : win;
      break;
    default:
      printf("\nPROGRAMMER ERROR: Unexpected choice!\n\n");
      break;
  }

  return result;
}
