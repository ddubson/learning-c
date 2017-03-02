#include <stdio.h>
#include <stdlib.h>

void dynamic_mem_allocation();
void calloc_usage();
void resizing_array();
void passing_arrays_to_functions();
void basic_pointer_structure_again();

int* printArray();
int* printArrayViaPointer();

int main() {
  dynamic_mem_allocation();
  basic_pointer_structure_again();
  calloc_usage();
  resizing_array();
  passing_arrays_to_functions();
  return 0;
}

void basic_pointer_structure_again() {
  int x = 5;
  int* y = &x;

  printf("--------- POINTER BASICS ---------- \n");
  printf("\nint x is: %d\n", x);
  printf("address of int x is: %p\n", &x);

  printf("pointer y contents: %p\n", y);
  printf("pointer y points to: %d\n", *y);
  printf("pointer y address: %p\n", &y);
  printf("----------------------------------- \n");
}

void passing_arrays_to_functions() {
  int numbers[] = {1,2,3};
  int* newArray = (int*) malloc(2*sizeof(int));
  newArray[0] = 4;
  newArray[1] = 5;

  // Pass-by-reference
  printArrayViaPointer(newArray, 2);
  free(newArray);

  newArray = printArray(numbers, 3);
  printArrayViaPointer(newArray, 3);
}

// int pointer specifies the return value is of array type
int* printArray(int numbers[], int sizeOfArray) {
  printf("\nPrint Array:\n");
  for(int i = 0; i < sizeOfArray; i++) {
    printf("[%p] %d \n", &numbers[i], numbers[i]);
  }
  printf("\n");
  return numbers;
}

int* printArrayViaPointer(int* numbers, int sizeOfArray){
  printf("\nArray Contents via Pointer:\n");
  for(int i = 0; i < sizeOfArray; i++) {
    printf("[%p] %d\n", &numbers[i], numbers[i]);
  }
  printf("\n[%p] %d (Garbage value beyond array bound!!)\n", &numbers[4], numbers[4]);

  return numbers;
}

void dynamic_mem_allocation() {
  // Allocate memory for character pointer
  // Cast void* return from malloc to what you need -> char*
  int sizeOfCharType = sizeof(char);
  printf("---------- Dynamic Memory Allocation ---------\n");
  printf("sizeof(char): %d byte.\n\n", sizeOfCharType);

  char *c = (char*) malloc(sizeOfCharType);
  *c = 'a';

  printf("[CONTENTS]  c: %s\n", c);
  printf("[ADDRESS]  &c: %p\n", &c);
  printf("[VALUE]    *c: %d\n", *c);
  //printf("[DEREF]   **c: %s\n", **c);

  // Free up heap memory when done with pointer
  // - void free(void *address)
  free(c);

  printf("----------------------------------------------\n");
}

void calloc_usage() {
  // allocate memory for arrays;
  char* sentence = (char *) calloc(100, sizeof(char));

  // same as malloc(100*sizeof(char))
}

void resizing_array() {
  // Allocate int array of size of 100
  int* arr = (int *)malloc(100*sizeof(int));

  // Increase size of existing array to 200
  arr = (int *)realloc(arr, 200*sizeof(int));

  // re-alloc'd block starts at same mem address as the originall allocated.
}
