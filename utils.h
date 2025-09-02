#pragma once

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// memory
#define UTILS_FREE(ptr) (free(ptr), ptr = nullptr)

// strings
void inline utils_concat(char *const dst, size_t size, char *const iteam1, char *const iteam2)
{
    snprintf(dst, size, "%s%s\n", iteam1, iteam2);
}

// file
void WriteFile(const char *contents, const char *filename, const char *mode);
void ReadFile(unsigned char **contents, int *length, const char *filename, const char *mode);
void PrintFile(unsigned char *contents, const int length);

// misc
static void inline utils_puti(int i)
{
    printf("%i\n", i);
}

static void inline utils_putf(float f)
{
    printf("%f\n", f);
}

static void inline utils_putd(double d)
{
    printf("%lf\n", d);
}
