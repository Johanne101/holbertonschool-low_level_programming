#include "main.h"

/**
 * binary_to_uint - Function converts a binary number to an `unsigned int`.
 * @b: Points to a string of 0 & 1s.
 *
 * Return: the converted number, or 0 if;
 * there is one or more chars in the string `b` that is not `0` or `1`
 * `b` is `NULL`.
 */
unsigned int binary_to_uint(const char *b)
{
	/*variable recorer string*/
	int length = 0;
	/*unsiged int variable*/
	unsigned int put_binary = 0, string;
	/* if string is null; return 0*/
	if (b == NULL)
		return (0);
	/* recorer el string*/
	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (length--, string = 1; length >= 0; length--, string = string * 2)
	{
		if (b[length] == '1')
			put_binary += string;
	}
	return (put_binary);
}

