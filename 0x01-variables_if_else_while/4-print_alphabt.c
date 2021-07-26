#include <stdio.h>

/**
 * main - Print alphabet w/ exceptions.
 *
 * Return: 0
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar (x);
		x++;
	}
	putchar('\n');
	return(0);
}
