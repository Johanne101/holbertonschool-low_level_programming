#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array of elements
 * @size: size bytes of elements.
 * Return: Pointer to the allocated memory, otherwise
 * return Null if error.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < nmemb * size; x++)
	{
		ptr[x] = 0;
	}
	return (ptr);
}

