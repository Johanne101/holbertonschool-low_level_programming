#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * containing the copy of the string given as a parameter.
 * @str: The string that is copied.
 *
 * Return: NULL if str == NULL if inufitient memory available.
 * Else - return the pointer to the duplicated string "str".
 */
char *_strdup(char *str)
{
	char *duplicate;
	int x, argc = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		argc++;

	duplicate = malloc(sizeof(char) * (argc + 1));

	if (duplicate == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		duplicate[x] = str[x];

	duplicate[argc] = '\0';

	return (duplicate);
}
