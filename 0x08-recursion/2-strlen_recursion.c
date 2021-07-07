#include "holberton.h"
/**
 * _strlen_recursion - This function returns the length of a string.
 * @s: The string.
 * Return: The legth of the pointed string 's'.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
