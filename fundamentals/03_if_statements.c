#include <stdio.h>

int main() {
  int choice;
  int result;

  printf("Choose your path: ");
  scanf("%d", &choice);

  if(choice == 1) {
    printf("You chose wisely.\n");
  } else {
    printf("You failed.\n");
  }

  // Ternary
  result = (choice > 2) ? 1 : 0;

  return 0;
}
