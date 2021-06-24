#include "holberton.h"
/**
 * print_numbers - This function print numbers 0-9, followed by a new line.
 * Return: Always 0.
 */
void print_numbers(void)
{
	int p = 0;

	for (p = '0'; p <= '9'; p++)
		_putchar(p);
	_putchar('\n');
}
