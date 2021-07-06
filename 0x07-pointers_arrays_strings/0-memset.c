#include "holberton.h"
/**
 * *_memset - This function fills memory w/ a constant byte.
 * @n:number of memory bytes.
 * @s:pointer of string.
 * @b: has the constant byte.
 *
 * Return: the pointer to the memory area "s".
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for ( ; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
