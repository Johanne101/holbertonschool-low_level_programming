#include <stdio.h>

/**
 * main - Print all different two digit combo.
 *
 * Return: 0 Success.
 */
int main(void)
{
	int x = 0, y;

	for ( ; x < 9; x++)
	{
		for (y = (x + 1); y < 10; y++)
		{
			putchar ((x % 10) + '0');
			putchar ((y % 10) + '0');
			if (x == 8 && y == 9)
				continue;
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
