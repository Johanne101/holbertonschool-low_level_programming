#include <stdio.h>

/**
 * main - This will print the name of the program, followed by a '\n'.
 * @argc - The amount of arguments
 * @argv - The array to the pointed arguments.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
