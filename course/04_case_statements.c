#include <stdio.h>

#define SUNDAY 1
#define MONDAY 2
#define TUESDAY 3
#define WEDNESDAY 4
#define THURSDAY 5
#define FRIDAY 6
#define SATURDAY 7
/*
  switch can only be used with 'char' or 'int'
*/
int main() {
  int dayOfWeek = 0;

  printf("What day is it?\n");
  scanf("%d", &dayOfWeek);

  switch(dayOfWeek) {
    case SUNDAY:
      printf("prepare to groan!\n");
      break;
    case MONDAY:
      printf("groan!\n");
      break;
    default:
      printf("%s\n", "That was not a valid day.");
  }

  return 0;
}
