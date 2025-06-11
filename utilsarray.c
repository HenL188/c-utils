#include "utilsarray.h"
#include <stdlib.h>
#include <string.h>

void* utils_array_pop(void *arr, size_t length, size_t amount, size_t elem_size){
  if (amount < 1) {
    amount = 1;
  }
  if (length < 2) {
    return nullptr;
  }
  size_t size = length - amount;

  // Allocate memory for the new array with the new size
  void* temp = malloc(size * elem_size);
  if (temp == nullptr) {
    return nullptr;
  }

  // Copy elements from the original array to the new array
  for (size_t i = 0; i < size; i++) {
    // Copy data of the specified element size
    memcpy((char*)temp + i * elem_size, (char*)arr + i * elem_size, elem_size);
  }

  return temp;
}

void* utils_push(void *arr, size_t length, void *item, size_t elem_size) {
  // If the array has no elements (length < 1), it's invalid.
  if (length < 1) {
    return nullptr;
  }
  // Allocate memory for the new array with one additional element
  size_t new_size = length + 1;
  void* temp = malloc(new_size * elem_size);
  if (temp == nullptr) {
    return nullptr;
  }

  // Copy elements from the original array to the new array
  for (size_t i = 0; i < length; i++) {
    memcpy((char*)temp + i * elem_size, (char*)arr + i * elem_size, elem_size);
  }

  // Add the new item at the end of the new array
  memcpy((char*)temp + length * elem_size, item, elem_size);

  return temp;
}

void* utils_array_reverse(void *arr, size_t length, size_t elem_size) {
  if (length < 1) {
    return nullptr;
  }

  // Allocate memory for the new array (same size as the original array)
  void* temp = malloc(length * elem_size);
  if (temp == nullptr) {
    return nullptr;
  }

  // Reverse copy elements from the original array to the new array
  size_t index = length - 1;
  for (size_t i = 0; i < length; i++) {
    memcpy((char*)temp + i * elem_size, (char*)arr + index * elem_size, elem_size);
    index--;
  }

  return temp;
}

void* utils_make_array(size_t length, size_t elem_size) {
  void* temp = malloc(length * elem_size);
  if (temp == nullptr) {
    return nullptr;
  }
  return temp;
}

void utils_print_array(void *arr, size_t length, size_t elem_size, void (*print_func)(void*)) {
  for (size_t i = 0; i < length; i++) {
    // Print each element using the provided print function
    print_func((char *)arr + i * elem_size);
  }
}
void print_int_array(void *item) {
  printf("%d ", *(int*)item);
}
void print_float_array(void *item) {
  printf("%f ", *(float*)item);
}

void print_float_char(void *item) {
  printf("%c ", *(char*)item);
}

void print_double_array(void *item) {
  printf("%f ", *(double*)item);
}
