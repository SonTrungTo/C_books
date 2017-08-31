/* Program to calculate time elapsed between two time structures.
 * usage: elapsed_time(time1, time2);
 */
#include <stdio.h>

struct time {
  int hour;
  int minute;
  int second;
};

struct time elapsed_time(struct time time1, struct time time2) {
  struct time d_time;

  if (time2.second < time1.second) {
    time2.second += 60;
    d_time.second = time2.second - time1.second;
    time2.minute -= 1;
  } else
    d_time.second = time2.second - time1.second;

  if (time2.minute < time1.minute) {
    time2.minute += 60;
    d_time.minute = time2.minute - time1.minute;
    time2.hour -= 1;
  } else
    d_time.minute = time2.minute - time1.minute;

  if (time2.hour < time1.hour) {
    time2.hour += 24;
    d_time.hour = time2.hour - time1.hour;
  } else
    d_time.hour = time2.hour - time1.hour;

  return d_time;
}

int main(void) {
  struct time time1, time2, d_time;
  struct time elapsed_time(struct time time1, struct time time2);

  printf("Please enter your first time: ");
  scanf("%i:%i:%i", &time1.hour, &time1.minute, &time1.second);
  printf("Please enter your second time: ");
  scanf("%i:%i:%i", &time2.hour, &time2.minute, &time2.second);

  d_time = elapsed_time(time1, time2);
  printf("\n\n");
  printf("%.2i:%.2i:%.2i has/have passed between two times\n", d_time.hour,
d_time.minute, d_time.second);

  return 0;
}
