#include "holberton.h"
#include <stddef.h>
/**
 * _strpbrk - This function searches a string for any set of bytes.
 * @s: string of bytes.
 * @accept: number of bytes to be compared.
 * Return: the pointer of s.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y]; y++)
		{
		if (s[x] == accept[y])
			return (s + x);
		}
	}
	return (NULL);
}
