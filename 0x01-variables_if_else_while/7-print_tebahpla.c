#include <stdio.h>

/**
 * main - Program prints alphabet in reverse.
 *
 * Return: 0 Success.
 */
int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
		putchar (x);
		x--;
	}
	putchar ('\n');
	return (0);
}
