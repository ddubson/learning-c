#include <stdio.h>
#include <conio.h>

void example_sscanf();
void example_sprintf();
void example_getch();
void example_gets_puts();

int main() {
  example_sscanf();
  example_sprintf();
  example_getch();
  example_gets_puts();
  return 0;
}

void example_sscanf() {
  // sscanf() -> reads input into string
  printf("---- SSCANF ------\n");
  char date[] = "Saturday March 25 1998";
  int day, year;
  char weekday[20], month[20];

  // Dissects date by format, into variables
  printf("%s\n", date);
  sscanf(date, "%s %s %d %d", weekday, month, &day, &year);
  printf("%s %d, %d = %s\n", month, day, year, weekday );
  printf("-------------------\n");
}

void example_sprintf() {
  printf("---- SPRINTF ------\n");
  int day = 1;
  char month[] = "January";
  char date[20];

  sprintf(date, "The date is %s %d", month, day);
  printf("%s\n", date);

  printf("-------------------\n");
}

void example_getch() {
  printf("---- GETCH ------\n");

  // Single char input
  char ch;
  printf("\nPress any key to continue.\n");
  ch = getch();
  printf("\nInput was %c\n", ch);

  printf("-------------------\n");
}

void example_gets_puts() {
  puts("---- GETS AND PUTS ------\n");

  char name[50];
  puts("\nPlease enter your name: \n");
  gets(name);
  printf("\nYour name is %s\n", name);

  puts("-------------------------\n");
}
