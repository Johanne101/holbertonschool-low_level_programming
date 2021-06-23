#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - Print 10x's the alphabet in lowercase,
 * followeed by a new line.
 */
void print_alphabet_x10(void)
{
	int jj;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (jj = 'a'; jj <= 'z'; jj++)
		{
			_putchar(jj);
		}
		_putchar('\n');
	}
}
