#include "holberton.h"

/**
 * rot13 - encodes a string to rot13.
 * @string: the string
 * Return: encoded string.
 */
char *rot13(char *string)
{
	int num = 0, cnt = 0;
	char *block[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	while (string[num] != '\0')
	{
		for ( ; *(block[0] + cnt) != '\0'; cnt++)
		{
			if (string[num] == *(block[0] + cnt))
			{
				string[num] = *(block[1] + cnt);
				break;
			}
		}
		num++;
	}
	return (string);
}
