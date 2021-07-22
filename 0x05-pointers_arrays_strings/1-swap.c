#include "holberton.h"

/**
 * swap_int - This function will swap two integers.
 * @a: integer to be swapped.
 * @b: integer to be swapped by 'a'.
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
