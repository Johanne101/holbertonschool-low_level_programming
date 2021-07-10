#include "holberton.h"

int sqrt_function(int sum, int root);
int _sqrt_recursion(int n);
/**
 * _sqrt_recursion - This function returns the natural square root of a number.
 * @n:Is the number to return from the square root.
 *
 * Return: the natural square root of 'n'.
 */
int _sqrt_recursion(int n)
{
	int root = 1;
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			return (sqrt_function(n, root));
		}
	}
}
/**
 * sqrt_function - This function will find the natuiral square root of a number
 * @sum: parameter number to find the square root of.
 * @root: This parameter will test the root.
 * Return: The natural square root number.
 *
 */
int sqrt_function(int sum, int root)
{
	if (root * root == sum)
	{
		return (root);
	}
	else if (root * root > sum)
	{
		return (-1);
	}
	else
	{
	return (sqrt_function(sum, root + 1));
	}
}
