#include "search_algos.h"
/**
  * binary_search - function searches for value in a sorted array
  * of integers using the Binary search algorithm.
  * @array: pointer to the first element of the array to search in.
  * @size: number of elements in array.
  * @value:  is the value to search for.
  *
  * Return: index where value is located
  * If the value is not present or the array is NULL, return -1.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, left, right, jm;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (jm = left; jm < right; jm++)
			printf("%d, ", array[jm]);
		printf("%d\n", array[jm]);

		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}

	return (-1);
}
