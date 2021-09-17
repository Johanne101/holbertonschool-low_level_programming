#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count.
 * @argv: 1D array of strings.
 *
 * Return: the result of the multiplication.
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
