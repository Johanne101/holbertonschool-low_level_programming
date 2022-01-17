#include "search_algos.h"
/**
  * binary_search - searches for a value in a sorted array of integers
  * using the Binary search algorithm
  * @array: pointer to the first element of the array to search in.
  * @size: number of elements in array.
  * @value:  is the value to search for.
  *
  * Return: index where value is located
  * If the value is not present or the array is NULL, return -1.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Searching in array: %d\n", array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (-1);
}
