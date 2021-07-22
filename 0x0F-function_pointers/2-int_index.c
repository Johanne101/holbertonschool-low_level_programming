#include "function_pointers.h"

/**
 * int_index - Function searches for an int.
 * @array: Array of strings to find element.
 * @size: contains total number elements.
 * @cmp: Contains 1st elemt to return.
 *
 * Return: box with cmp element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int box = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for ( ; box < size; box++)
	{
		if (cmp(array[box]) == 1)
			return (box);
	}
	return (-1);
}
