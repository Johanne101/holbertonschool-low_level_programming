#include "holberton.h"

int confirm_prime(int sum, int div);
int is_prime_number(int n);
/**
 * is_prime_number - Returns the input prime integer number.
 * @n: The integer number to be checked.
 * Return: the prime number as 0 or 1 "true or false"
 */
int is_prime_number(int n)
{
	int div = 2;

		if (n <= 1)
		{
			return (0);
		}
		else
		{
			return (confirm_prime(n, div));
		}
}
/**
 * confirm_prime - function that checks if a number is divisible.
 * @sum: the number to be checked.
 * @div: the number divisible by itself.
 *
 * Return: 0 if the number is divisible.
 * 1 if the number is not divisible.
 */
int confirm_prime(int sum, int div)
{
	if (sum % div == 0)
	{
		return (0);
	}
	if (sum % div > 1)
	{
		return (1);
	}
	return (confirm_prime(sum, div + 1));
}
