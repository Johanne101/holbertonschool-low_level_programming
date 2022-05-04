#include "search_algos.h"
/*
 * jump_search - function searches for value in a sorted array
 * of integers using the Jump search algorithm.
 * @array - pointer to the first element of the array to search in
 * @size - is the number of elements in array.
 * @value - is the value to search for.
 *
 * Return: the first index where value is located,
 * otherwise, If value is not present in array or if array is NULL,
 * function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = floor(sqrt(size));
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += floor(sqrt(size));
		if (prev >= size)
		{
			return -1;
		}
	}
	printf("Value found between indexes [%ld] and [%d]\n", prev, array[step]);
	while (array[prev] < value)
	{
		prev = prev + 1;
		if (prev == min(step, size))
		{
			return -1;
		}
	}
	if (array[prev] == value)
	{
		return prev;
	}
	return -1;
}
/*
 * printf("Value checked array[%ld] = [%d]\n", step, array[step]);
 * printf("Value found between indexes [%ld] and [%d]\n", prev, array[step]);
 * printf("variable value BEFORE ENTERING array = [%ld]\n", prev);
 * printf("variable value AFTER ENTERING array = [%ld]\n", prev);
 */

