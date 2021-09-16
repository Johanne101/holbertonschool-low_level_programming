#include "holberton.h"

/**
 * puts_half - Function prints the second half of a string
 * @str: string from whic to print
 */
void puts_half(char *str)
{
	int len, mid;

	/* First find length of the string */
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	/* if mid of len is odd, then mid will be len/2 and (len/2)+1 */
	if (len % 2 == 1)
	{
		mid = (len - 1) / 2;
		mid++;
	}
	for (; mid < len; mid++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
