#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: count
 * @argv: array of strings
 *
 * Return: sum of positive numbers.
 */

int main(int argc, char *argv[])
{
	int n, i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (n = 1; n < argc; n++)
	{
		for (i = 0; i != 0; i++)
		{
			if (!isdigit(argv[n][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);

	return (0);
}
