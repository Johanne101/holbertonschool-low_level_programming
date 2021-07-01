#include "holberton.h"
/**
 * _strncpy - Funtion copies a string
 *@src: is the source to be copied
 *@dest: Receives the data from 'src'
 *@n: number of characters to be copied
 *Return: dest result of n
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
