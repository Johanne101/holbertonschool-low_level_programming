#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states
 * if it's positive, negative, or zero.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);
	if (n < 0)
	{
	printf("negative\n");
	}
	else if (n == 0)
	{
	printf("zero\n");
	}
	else
	{
	printf("positive\n");
	}
	return (0);
}
