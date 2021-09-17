#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int str1, str2, l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str1 = _strlen(s1);
	str2 = _strlen(s2);

	if (n >= str2)
	{
		n += str2;
	}
	p = malloc(str1 + n + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (l1 = 0; l1 < str1; l1++)
	{
		p[l1] = s1[l1];
	}
	for  (l2 = 0; l2 < n; l1++, l2++)
	{
		p[l1] = s2[l2];
	}
	p[l1] = '\0';
	return (p);
}
/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
