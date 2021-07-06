#include "holberton.h"
/**
 * _memcpy - The function will copy memory area to another destination.
 * @n: number bytes
 * @src: address with memory bytes of 'n'.
 * @dest: memory space for "n" bytes.
 *
 * Return: pointer of "dest".
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x1 = 0;

	for ( ; x1 < n; x1++)
	{
		src[x1] = dest[x1];
	}
	return (dest);
}
