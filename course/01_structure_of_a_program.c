// Pre-processor directive
// include C library - standard input/output
#include <stdio.h>

// entry function of a program
int main() {
   int b;

   // Read from stdin
   // Takes in the address on where to send the input content
   scanf("%d", &b);

   // Output to stdout
   printf("You entered %d\n", b);
}
