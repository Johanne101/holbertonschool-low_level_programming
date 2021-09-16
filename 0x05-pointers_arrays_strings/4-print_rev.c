#include "holberton.h"

/**
 * print_rev- Funtion prints a string in reverse.
 * @s: Pointed adress of string.
 * Return: 0
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	{
	}
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
