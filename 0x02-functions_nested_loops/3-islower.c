#include "holberton.h"

/**
 * _islower - Checks lowercase characters.
 * @c: character is to identify the lowercase characters.
 * Return: 1 if 'c' is lowercase, otherwise returns 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
