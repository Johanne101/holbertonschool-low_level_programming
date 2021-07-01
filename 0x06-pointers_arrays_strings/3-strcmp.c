#include "holberton.h"
/**
 * _strcmp - this function compares two strings
 * @s1: is the first string to be compared
 * @s2: is the second string  to be compared
 * Return: the residual of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i1 = 0, i2 = 0;

	for ( ; s1[i1] != '\0' && s2[i2] != '\0'; i1++, i2++)
	{
		if (s1[i1] != s2[i2])
			return (s1[i1] - s2[i2]);
	}
	return (s1[i1] - s2[i2]);
}
