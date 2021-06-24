#include "holberton.h"
/**
 * _isdigit - Check for a digit (o through 9).
 * @c: This character 'c' describes the question.
 * Return: 1 if c is a digit, otherwise return 0.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
