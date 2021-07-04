#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - This function will capitalize all words of a string.
 * @str: This is the string to be capitalized.
 * Return: The pointer with changed string.
 *
 */
char *cap_string(char *str)
{
	int x, y, flag = 1;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\\',
		'"', '(', ')', '{', '}'};

	for (x = 0; str[x] != '\0'; x++)
	{
		if (flag == 1)
		{
			if (str[x] >= 'a' && str[x] <= 'z')
			{
				str[x] -= 32;
			}
			flag = 0;
		}
		for (y = 0; sep[y] != '\0'; y++)
		{
			if (str[x] == sep[y])
			{
				flag = 1;
			}
		}
	}
	return (str);
}
