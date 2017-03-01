#include <stdio.h>
#include <stdlib.h>

void basic_pointer_structure();
void calloc_usage();
void resizing_array();
void passing_arrays_to_functions();

int* printArray();
int* printArrayViaPointer();

int main() {
  basic_pointer_structure();
  calloc_usage();
  resizing_array();
  passing_arrays_to_functions();
  return 0;
}

void passing_arrays_to_functions() {
  int numbers[] = {1,2,3};
  int* newArray = (int*) malloc(3*sizeof(int));
  // Pass-by-reference
  newArray = printArray(numbers, 3);
  printArrayViaPointer(newArray, 3);
}

// int pointer specifies the return value is of array type
int* printArray(int numbers[], int sizeOfArray) {
  for(int i = 0; i < sizeOfArray; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");
  return numbers;
}

int* printArrayViaPointer(int* numbers, int sizeOfArray){
  for(int i = 0; i < sizeOfArray; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");
  return numbers;
}

void basic_pointer_structure() {
  // Allocate memory for character pointer
  // Cast void* return from malloc to what you need -> char*
  int sizeOfCharType = sizeof(char);
  printf("sizeof(char): %d byte.\n\n", sizeOfCharType);

  char *c = (char*) malloc(sizeOfCharType);
  *c = 'a';

  printf("[CONTENTS]  c: %s\n", c);
  printf("[ADDRESS]  &c: 0x%dh\n", &c);
  printf("[VALUE]    *c: %d\n", *c);
  //printf("[DEREF]   **c: %s\n", **c);

  // Free up heap memory when done with pointer
  // - void free(void *address)
  free(c);
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
