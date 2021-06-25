#include "holberton.h"
/**
 * print_most_numbers - This will print 0 to 9, except, 2 and 4.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num % 10 + '0');
		}
	}
	_putchar('\n');
}
