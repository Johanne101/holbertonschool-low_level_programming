#include <stdio.h>
/**
 * main - program print the lowercase alphabet.
 * @:
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 97; x <= 'z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
