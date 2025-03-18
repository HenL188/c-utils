#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

// memory
void inline utils_dealloc(void *ptr)
{
    free(ptr);
    ptr = NULL;
}


//strings
void inline utils_concat(char* const dst, size_t size, char* const iteam1, char* const iteam2){
    snprintf(dst, size, "%s%s\n", iteam1, iteam2);
}

// arraies

//misc
void inline utils_puti(int i){
  printf("%i\n", i);
}

void inline utils_putf(float f){
  printf("%f\n", f);
}

void inline utils_putd(double d){
  printf("%lf\n", d);
}
