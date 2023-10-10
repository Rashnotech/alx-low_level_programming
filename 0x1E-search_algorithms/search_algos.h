#ifndef _SEARCH_H
#define _SEARCH_H

/** Header **/
#include <stdio.h>
#include <stdlib.h>

/** Function prototype **/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t, size_t);

#endif
