#include "holberton.h"

/**
 *
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;

	return;
}
