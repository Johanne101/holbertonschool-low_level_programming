#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - Create an array with a specific initialized char.
 * @size: This is the size of the array.
 * @c: This is the specified char or first char.
 * Return: pointed string of the array, or NULL if false.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
