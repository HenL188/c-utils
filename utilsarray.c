#include "utilsarray.h"
#include <stdlib.h>


int* utils_intpop(int *arr, size_t length, int amount){
  if (amount < 1){
    amount = 1;
  }
  if (length < 2){
    return NULL;
  }
  int size = length - amount;
  int *temp = (int*)malloc(size * 4);
  if (temp == NULL){
    return NULL;
  }
  for (int i = 0; i < size; i++){
      temp[i] = arr[i];
  }
  return temp;
}

float* utils_floatpop(float *arr, size_t length, int amount){
  if (amount < 1){
    amount = 1;
  }
  if (length < 2){
    return NULL;
  }
  int size = length - amount;
  float *temp = (float*)malloc(size * 4);
  if (temp == NULL){
    return NULL;
  }
  for (int i = 0; i < size; i++){
      temp[i] = arr[i];
  }
  return temp;
}

double* utils_doublepop(double *arr, size_t length, int amount){
  if (amount < 1){
    amount = 1;
  }
  if (length < 2){
    return NULL;
  }
  int size = length - amount;
  double *temp = (double*)malloc(size * 8);
  if (temp == NULL){
    return NULL;
  }
  for (int i = 0; i < size; i++){
      temp[i] = arr[i];
  }
  return temp;
}

char* utils_stringpop(char *arr, size_t length, int amount){
  if (amount < 1){
    amount = 1;
  }
  if (length < 2){
    return NULL;
  }
  int size = length - amount;
  char *temp = (char*)malloc(size);
  if (temp == NULL){
    return NULL;
  }
  for (int i = 0; i < size; i++){
      temp[i] = arr[i];
  }
  return temp;
}

int* utils_intpush(int *arr, size_t length, int iteam){
  if (length < 1){
    return NULL; 
  }
  int size = length + 1;
  int *temp = (int*)malloc(size * 4);
  if (temp == NULL){
    return NULL;
  }
  for(int i = 0; i < length; i++){
    temp[i] = arr[i];
  }
  temp[length] = iteam;
  return temp;
}

float* utils_floatpush(float *arr, size_t length, float iteam){
  if (length < 1){
    return NULL; 
  }
  int size = length + 1;
  float *temp = (float*)malloc(size * 4);
  if (temp == NULL){
    return NULL;
  }
  for(int i = 0; i < length; i++){
    temp[i] = arr[i];
  }
  temp[length] = iteam;
  return temp;
}

double* utils_doublepush(double *arr, size_t length, double iteam){
  if (length < 1){
    return NULL; 
  }
  int size = length + 1;
  double *temp = (double*)malloc(size * 8);
  if (temp == NULL){
    return NULL;
  }
  for(int i = 0; i < length; i++){
    temp[i] = arr[i];
  }
  temp[length] = iteam;
  return temp;
}

char* utils_charpush(char *arr, size_t length, char iteam){
  if (length < 1){
    return NULL; 
  }
  int size = length + 1;
  char *temp = (char*)malloc(size);
  if (temp == NULL){
    return NULL;
  }
  for(int i = 0; i < length; i++){
    temp[i] = arr[i];
  }
  temp[length] = iteam;
  return temp;
}
