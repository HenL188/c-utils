#pragma once

#include <stddef.h>
#include <stdlib.h>

#define Utils_free(ptr)(free(ptr), ptr = NULL)

// memory
void inline utils_dealloc(void *ptr);
// strings
void inline utils_concat(char* const dst, size_t size, char* const iteam1, char* const iteam2);

//file
void WriteFile(const char* contents, const char* filename, const char* mode);
void ReadFile(unsigned char** contents, int* length, const char* filename, const char* mode);
void PrintFile(unsigned char* contents, int length);

//misc
void inline utils_puti(int i);
void inline utils_putf(float f);
void inline utils_putd(double d);
