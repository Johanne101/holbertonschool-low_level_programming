#include "holberton.h"
/**
 * reverse_array - This function will reverse the array of integers
 * @n: is the number of elements "content" of the array
 * @a: is the array if integers to reverse
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int aux;

	for (x = 0, y = n - 1; x < y ; x++, y--)
	{
		aux = a[x];
		a[x] = a[y];
		a[y] = aux;
	}
}
