#include <stdio.h>

/**
 * main - Prints base 16 w/ lowercase letters.
 *
 * Return: 0 Success.
 */
int main(void)
{
	int x = '0';
	int y = 'a';

	for ( ; x <= '9'; x++)
	{
		putchar (x);
	}
	while (y <= 'f')
	{
		putchar (y);
		y++;
	}
	putchar ('\n');
	return (0);
}
