// Update 5 different time structs.
#include <stdio.h>

struct time {
  int hour;
  int minute;
  int second;
};

struct time timeUpdate(struct time  now) {
  ++now.second;

  if (now.second == 60) {
    now.second = 0;
    ++now.minute;

    if (now.minute == 60) {
      now.minute = 0;
      ++now.hour;

      if (now.hour == 24)
        now.hour = 0;
    }
  }
  return now;
}

int main(void) {
  struct time   timeUpdate(struct time  now);
  struct time   testTimes[5] = {{23, 59, 59}, {10, 0, 1}, {10, 29, 29},
{22, 23, 59}, {16, 30, 0}};
  int           i;

  for (i = 0; i < 5; i++) {
    printf("Time is %.2i:%.2i:%.2i ", testTimes[i].hour, testTimes[i].minute,
  testTimes[i].second);

    testTimes[i] = timeUpdate(testTimes[i]);

    printf("...one second later it's %.2i:%.2i:%.2i \n", testTimes[i].hour,
  testTimes[i].minute, testTimes[i].second);
  }

  return 0;
}
