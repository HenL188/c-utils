#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>



// memory
void utils_dealloc(void *ptr);
// strings
void utils_concat(char* const dst, size_t size, char* const iteam1, char* const iteam2);
// arraies

//misc
void utils_puti(int i);
void utils_putf(float f);
void utils_putd(double d);

#endif
