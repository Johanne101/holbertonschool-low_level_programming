#include "holberton.h"
/**
 * _strlen - This function returns the lenght of a string.
 * @s: String character array.
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int len;
	
	for (len = 0; *(s + len) != '\0'; len++);
	
	return (len);
}
