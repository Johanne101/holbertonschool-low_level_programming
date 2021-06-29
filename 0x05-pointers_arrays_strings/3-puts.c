#include "holberton.h"
/**
 * _puts - Print a string.
 * @str: is the pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
