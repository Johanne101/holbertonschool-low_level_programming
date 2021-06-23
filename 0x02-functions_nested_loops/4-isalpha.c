#include "holberton.h"
/**
 * _isalpha - this will check for alphabetic character
 * @c: This describes character to evaluate
 * Return: 1 if 'c' is a letter, lowercase or upercase, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
