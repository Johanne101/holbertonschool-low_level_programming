#include "holberton.h"
/**
 * _strspn - This function will get the length of the prefix substring.
 * @s: the string to be searched.
 * @accept: the prefix substring.
 * Return: number of bytes from s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x,  y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
