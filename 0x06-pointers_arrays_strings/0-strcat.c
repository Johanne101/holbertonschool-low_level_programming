#include "holberton.h"
/**
 * _strcat - Concatenates/connects two strings of characters into a chain list
 * @dest: is the first parameters for dest
 * @src: is the second parameters for src
 * Return: the pointer of the string "dest"
 */
char *_strcat(char *dest, char *src)
{
	int index, index2;

	for (index = 0; dest[index] != '\0'; index++)
	;
	for (index2 = 0; src[index2] != '\0'; index++, index2++)
	{
		dest[index] = src[index2];
	}
	return (dest);
}
