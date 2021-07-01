#include "holberton.h"
/**
 * _strncat - function appends the 'src' string to the dest string
 * @src: pointer for indx2
 * @dest: pointer for indx
 * @n: is an integer for the question
 * Return: a pointer to the resultin string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int indx, indx2;

		for (indx = 0; dest[indx] != '\0'; indx++)
		;
		for (indx2 = 0; indx2 < n && src[indx2] != '\0'; indx++, indx2++)
		{
		dest[indx] = src[indx2];
		}
	return (dest);
}
