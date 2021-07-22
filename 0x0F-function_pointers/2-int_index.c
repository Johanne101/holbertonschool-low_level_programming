#include "function_pointers.h"

/**
 * array_iterator - Function to search for an integer.
 * @array: contains total element numbers.
 * @size: is the size of string.
 * @action: pointer to function to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == NULL || size == '\0')
		return;

	if (action == NULL)
		return;

	for ( ; x < size; x++)
	{
		(*action)(array[x]);
	}
}
