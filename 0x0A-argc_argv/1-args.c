#include <stdio.h>

/**
 * main - This will print the name of the program, followed by a '\n'.
 * @argc: The size amount of arguments
 * @argv: The array to the pointed arguments (string).
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
