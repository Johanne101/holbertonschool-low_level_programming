#include "search_algos.h"
/**
  * linear_search - C code to linearly search value in arr[].
  * @array: Pointer to the first element of the array to search in.
  * @size: s the number of elements in array.
  * @value: is the value to search for.
  *
  * Return: If value is present then return its location,
  * otherwise, return -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for ( ; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
