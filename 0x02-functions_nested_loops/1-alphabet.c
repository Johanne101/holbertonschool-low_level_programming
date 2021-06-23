#include "holberton.h"
/**
 * main - Print the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
