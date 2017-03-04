#include <stdio.h>

#define m1

// PI -> macro template
// 3.14.15 -> macro expansion
#define PI 3.1415
#define AREA(x) (3.14*x*x)

void initFunction();

void ex_using_macros();

void ex_conditional_macros();

void ex_os_based_macros();

void endFunction();

// Run before the main function
#pragma startup initFunction 100

// Run after the main function
#pragma exit endFunction 100

int main() {
    ex_using_macros();
    ex_conditional_macros();
    ex_os_based_macros();

    return 0;
}

void ex_os_based_macros() {
#ifdef windows
    printf("I'm in Windows.\n");
#else
    printf("I'm not on Windows.\n");
#endif

}

void ex_conditional_macros() {
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
}

void ex_using_macros() {
    printf("pi is %f\n", PI);
    printf("area is %f\n", AREA(2));
}

void initFunction() {
    printf("Initializing.\n");
}

void endFunction() {
    printf("Quitting.\n");
}
