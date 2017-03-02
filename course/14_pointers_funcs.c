#include <stdio.h>

int compare(int,int);
void compareBy(int (*compare_p)(int a, int b));

int main() {
  compareBy(compare);
  return 0;
}

// Define a function pointer
typedef int (*compare_p)(int,int);

// compare_p is the name of the function pointer
void compareBy(compare_p cmp) {
  printf("result: %d\n", cmp(2, 3));
}

int compare(int a, int b) {
  if(a > b) {
    return 1;
  } else {
    return -1;
  }
}
