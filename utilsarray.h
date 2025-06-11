#pragma once
#include <stdio.h>

typedef void (*print_func)(void*);

void print_int_array(void *item);

void print_float_array(void *item);

void print_float_char(void *item);

void print_double_array(void *item);

void* utils_array_pop(void *arr, size_t length, size_t amount, size_t elem_size);
void* utils_array_push(void *arr, size_t length, void *item, size_t elem_size);
void* utils_array_reverse(void *arr, size_t length, size_t elem_size);
void utils_print_array(void *arr, size_t length, size_t elem_size, print_func);
void* utils_make_array(size_t length, size_t elem_size);
