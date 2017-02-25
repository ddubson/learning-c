#include <stdio.h>

int main() {
  // sscanf() -> reads input into string
  char date[] = "Saturday March 25 1998";
  int day, year;
  char weekday[20], month[20];
  sscanf(date, "%s %s %d %d", weekday, month, &day, &year);
  printf("%s %d, %d = %s\n", month, &day, &year, weekday );

  // getch() -> read single character
  //char c;
  //c = getch();



  return 0;
}
