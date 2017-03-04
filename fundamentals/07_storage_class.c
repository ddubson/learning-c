#include <stdio.h>

// global variable
int z = 35;

int main() {
  // auto -> automatic storage class
  // restricted to scope of block
  auto int i = 1, j = 3;
  {
    auto int j = 2;
    {
      auto int j = 1;
      printf("\n%d\n", j);
    }
    printf("\n%d\n", j);
  }
  printf("\n %d %d \n", i, j);

  // register -> CPU registers
  // scope -> block
  // almost never used anymore

  // static -> stored in memory
  // defaults to 0
  // local to the block
  static int x = 5;

  // external -> memory
  // defaults to 0
  // scope -> global
  // lifetime of program
  extern int y;
  printf("extern type: %d\n", y);

  return 0;
}

int y = 31;
