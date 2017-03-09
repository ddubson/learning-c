#include <stdio.h>
// Bool is not a standard data type in C, so please compile in C99 mode with the addition
// of this include.
#include <stdbool.h>

struct SomeData {
  int value;
  char ch;
  bool is_valid;
};

int main() {
  struct SomeData some_data;
  // Use the "." to access members of struct on a variable
  some_data.value = 2;
  some_data.ch = 'a';
  some_data.is_valid = true;
  printf("Some Data variable begin: %p\n", &some_data);
  
  struct SomeData *struct_ptr = &some_data;
  // Use the arrow notation to access members of struct ptr
  printf("some_data->value: %d\n", struct_ptr->value);
  printf("some_data->ch: %c\n", struct_ptr->ch);
  printf("some-data->is_valid: %d\n", struct_ptr->is_valid);

  printf("Structure pointer begin: %p\n", struct_ptr);

  return 0;
}
