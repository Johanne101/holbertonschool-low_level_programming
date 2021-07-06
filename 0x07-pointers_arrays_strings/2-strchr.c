#include "holberton.h"
/**
 * _strchr - Fuction will locate a character in a string.
 * @c: the character in the 's' string.
 * @s: string with characters.
 * Return: the pointer
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for ( ; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
