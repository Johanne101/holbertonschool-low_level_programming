#include "holberton.h"

/**
 * _islower - This function will checks for lowercase characters.
 * @c: Parameter integer 'c' character is to identify the lowercase characters.
 * Return: 1 if 'c' is lowercase, 
 * Otherwise returns 0.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
