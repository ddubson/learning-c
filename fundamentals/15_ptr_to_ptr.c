#include <stdio.h>

int main() {
  int value1 = 10;
  int value2 = 5;

  int* ptr = &value1;
  int** ptr_ptr = &ptr;

  printf("Printing deferenced pointer:\n");
  printf("value1: %d\n", value1);
  printf("*ptr: %d\n",*ptr);

  printf("ptr_ptr: %p\n", ptr_ptr);
  printf("*ptr_ptr: %p\n", *ptr_ptr);
  printf("ptr: %p\n", ptr);

  printf("**ptr_ptr: %d\n", **ptr_ptr);
}
