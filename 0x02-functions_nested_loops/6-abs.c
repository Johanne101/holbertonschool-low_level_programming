#include "holberton.h"
#include <stdio.h>
/**
 * _abs - This function computes the absolute value of an integer.
 * 
 * Returns: The absolute number.
 *
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
