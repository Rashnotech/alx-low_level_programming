#ifndef _SEARCH_H
#define _SEARCH_H

/** Header **/
#include <stdio.h>
#include <stdlib.h>

/** Function prototype **/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t, size_t);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary(int *array, size_t left, size_t right, int value);
#endif
