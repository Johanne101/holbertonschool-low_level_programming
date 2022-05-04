#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))
#include <assert.h>


int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif

