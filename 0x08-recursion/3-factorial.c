#include "holberton.h"
/**
 * factorial - THis function returns the factorial of a given number.
 * @n: is the integer number
 * Return: The factorial number of 'n'.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
