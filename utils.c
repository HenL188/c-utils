#include "utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// memory
void inline utils_dealloc(void *ptr)
{
    free(ptr);
    ptr = nullptr;
}

//strings
void inline utils_concat(char* const dst, size_t size, char* const iteam1, char* const iteam2){
    snprintf(dst, size, "%s%s\n", iteam1, iteam2);
}

//file
void WriteFile(const char* contents, const char* filename,const char* mode) {
    FILE* f = fopen(filename, mode);
    size_t length = strlen(contents);
    fwrite(contents, sizeof(char), length, f);
    fclose(f);
}

void ReadFile(unsigned char** contents, int* length, const char* filename, const char* mode) {
    FILE* f = fopen(filename, mode);
    fseek(f, 0, SEEK_END);
    long file_size = ftell(f);
    rewind(f);
    // Allocate buffer
    *contents = (unsigned char*)malloc(file_size);
    if (*contents == NULL) {
        perror("Memory allocation failed");
        fclose(f);
        exit(EXIT_FAILURE);
    }
    size_t bytes_read = fread(*contents, 1, file_size, f);
    if (bytes_read != file_size) {
        perror("Failed to read complete file");
        free(contents);
        fclose(f);
        exit(EXIT_FAILURE);
    }

    *length = (int)bytes_read;
    fclose(f);
}

void PrintFile(unsigned char* contents, const int length) {
    for (int i = 0; i < length; i++) {
        printf("%c", contents[i]);
    }
}

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
