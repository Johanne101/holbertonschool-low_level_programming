#include "holberton.h"
/**
 * _pow_recursion - Function returns the value of x raised to the power of y.
 * @x: has the integer value to be raised.
 * @y: Is the function value to be returned.
 * Return: The raised value of 'x'.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
