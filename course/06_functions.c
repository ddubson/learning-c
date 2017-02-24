#include <stdio.h>

// Function prototype
int sum(int, int);
void passByValueExample();
void passByReferenceExample();

int main() {
  passByValueExample();
  passByReferenceExample();
  return 0;
}

// Function declaration with 'a' and 'b' as formal params.
int sum(int a, int b) {
  return a+b;
}

void passByValueExample() {
  int a = 5, b = 4;
  printf("---- Pass By Value ----\n");
  printf("original: a: %d, b: %d\n", a, b);
  printf("sum: %d\n", sum(a, b));
  printf("after call: a: %d, b: %d\n", a, b);
  printf("-----------------------\n");
}

void passByReferenceExample() {
  // TODO
}
