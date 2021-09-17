#include "main.h"

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *src, len = 0;

	if (min > max)
	{
		return (NULL);
	}
	src = malloc(sizeof(int) * (max - min + 1));

	if (src == NULL)
		return (NULL);

	for (; min <= max; min++, len++)
	{
		src[len] = min;
	}
	return (src);
}

