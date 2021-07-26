#include <stdio.h>

/**
 * main - Print all sigle-digits seperated by a ','.
 *
 * Return: 0 Success.
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar (x);
		if (x != '9')
		{
			putchar (',');
			putchar (' ');
		}
		x++;
	}
	putchar ('\n');
	return (0);
}
