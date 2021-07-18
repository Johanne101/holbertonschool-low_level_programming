#include "holberton.h"
/**
 * _strcpy - Copy the string pointing to 'src', 
 * to the pointed destination 'dest'.
 *
 * @dest: the address to be copied into.
 * @src: This address cointains the string to be copied.
 *
 * Return: String in the pointer 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
	int x;


	for (x = 0; *(src + x) != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
	return ('\0');
}
