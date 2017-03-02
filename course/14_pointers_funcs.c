#include <stdio.h>

// Define a function pointer
typedef int (*compare_p)(int,int);

int compare(int,int);
void compareBy(compare_p);

int main() {
  compareBy(compare);
  return 0;
}

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
