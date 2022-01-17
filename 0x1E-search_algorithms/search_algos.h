#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int binary_search(int *array, size_t size, int value);

#endif
