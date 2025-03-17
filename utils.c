#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

// memory
void utils_dealloc(void *ptr)
{
    free(ptr);
    ptr = NULL;
}


//strings
void utils_concat(char* const dst, size_t size, char* const iteam1, char* const iteam2){
    snprintf(dst, size, "%s%s", iteam1, iteam2);
}

// arraies

//misc
void utils_puti(int i){
  printf("%i", i);
}

void utils_putf(float f){
  printf("%f", f);
}

void utils_putd(double d){
  printf("%lf", d);
}
