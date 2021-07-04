#include "holberton.h"
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 * Return: The encoded string.
 */
char *leet(char *str)
{
	int i1 = 0, i2;
	char *leet[] = {"aAeEoOtTlL", "43071"};

	for ( ; str[i1] != '\0'; i1++)
	{
		for (i2 = 0; *(leet[0] + i2) != '\0'; i2++)
		{
			if (str[i1] == *(leet[0] + i2))
			{
				str[i1] = *(leet[1] + (i2 /2));
			}
		}
	}
	return (str);
}
