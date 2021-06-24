#include "holberton.h"
/**
 * _isupper - Check for uppercase charater.
 * @c: this character describes the question.
 * Return: 1 if 'c' is uppercase, otherwise return 0.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
