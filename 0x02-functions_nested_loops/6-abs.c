#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - This function prints the sign of a number.
 * 
 * Returns: 1 and prints + if 'n' is greater than zero,
 * otherwise return 0 and prints 0 if 'n' is zero,
 * or returns -1 and prints - if 'n' is less than zero.
 *
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
