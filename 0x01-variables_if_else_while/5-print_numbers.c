#include <stdio.h>

/**
 * main - Prints sigle digits from 0 - 9.
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar (x);
		x++;
	}
	putchar ('\n');
	return (1);
}
