#include "3-calc.h"

/**
 * main - manual calculator
 * @argc: number of arguments
 * @argv: Arguments.
 *
 * Return: 0 on Success, otherwise error.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*func)(int, int);
	char *op;

	/* fisrt verify if the running arguments exist. */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* now we will declare arguments. */

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	func = (*get_op_func(op));

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(num1, num2));
	return (0);
}
