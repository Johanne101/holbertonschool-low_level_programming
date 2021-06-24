#include "holberton.h"
/**
 * print_numbers - This function print numbers 0-9, followed by a new line.
 * Return: Always 0.
 */
void print_numbers(void)
{
	int perrito_lindo = 0;

	for (perrito_lindo = '0'; perrito_lindo <= '9'; perrito_lindo++)
		_putchar(perrito_lindo);
	_putchar('\n');
}
