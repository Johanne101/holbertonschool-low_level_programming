#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: arguement it recieves.
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
