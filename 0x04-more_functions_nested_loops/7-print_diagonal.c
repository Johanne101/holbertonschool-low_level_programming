#include "holberton.h"
/**
 * print_diagonal - This function will draw a line.
 * @n: The'n' character represents the interger.
 */
void print_diagonal(int n)
{
	int x, y;
	if ( n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for(y = 0; y < x; y++)
				_putchar('\\');
			_putchar('\n');
		}
	}
}
