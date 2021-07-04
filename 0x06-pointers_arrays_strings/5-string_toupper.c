#include "holberton.h"
/**
 * string_toupper - This function changes all lowecase letters
 * of a string to uppercase.
 * @str: the string to be changed.
 * Return: The changed string "*str".
 */
char *string_toupper(char *str)
{
	int i1 = 0;

	for ( ; str[i1] != '\0'; i1++)
	{
		if  (str[i1] >= 'a' && str[i1] <= 'z')
		{
			str[i1] -= 32;
		}
	}
	return (str);
}
