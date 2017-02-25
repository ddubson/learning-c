#include <stdio.h>
#define m1

// PI -> macro template
// 3.14.15 -> macro expansion
#define PI 3.1415
#define AREA(x) (3.14*x*x)

void initFunction();
void endFunction();

// Run before the main function
#pragma startup initFunction 100

// Run after the main function
#pragma exit endFunction 100

int main() {
  printf("pi is %f\n", PI);
  printf("area is %f\n", AREA(2));

  #ifdef m1
    printf("m1 is defined\n");
  #endif

  // Undefine a macro
  #undef m1

  #ifdef m1
    printf("Still defined? Nope!\n");
  #endif

  #ifdef m2
    printf("this should be silent\n");
  #endif

  #ifdef windows
    printf("I'm in Windows.\n");
  #else
    printf("I'm not on Windows.\n");
  #endif

  return 0;
}

void initFunction() {
  printf("Initializing.\n");
}

void endFunction() {
  printf("Quitting.\n");
}
