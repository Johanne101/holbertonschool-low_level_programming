#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of args.
 *
 * Return: sum of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list box;
	unsigned int test, sum = 0;

	va_start(box, n);

	for (test = 0; test < n; test++)
		sum = sum + va_arg(box, int);

	va_end(box);
	return(sum);
}
