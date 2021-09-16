#include "holberton.h"

/**
 * rev_string - Function that reverses a string.
 * @s: The given string.
 */
void rev_string(char *s)
{
	int c, len;
	char tmpry;

	for (c = 0; s[c] != '\0'; c++)
		;
	for (len = 0; len < (c / 2); len++)
	{
		tmpry = s[len];
		s[len] = s[c - 1 - len];
		s[c - 1 - len] = tmpry;
	}
}
