#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - finds the lengh of a string.
 * @str: The string to be measured.
 *
 * Return: Length of string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length + 1);
}

/**
 * _strcopy - copies *str
 * @dest: memory destination of copied string.
 * @src: string source.
 *
 * Return: pointer destination.
 */
char *_strcopy(char *dest, char *src)
{
	int box = 0;

	for (box = 0; src[box]; box++)
		dest[box] = src[box];

	dest[box] = '\0';

	return (dest);
}

/**
 * new_dog - Creats a new Doge coin.
 * @name: Dog's name.
 * @age: Doge's age.
 * @owner: Dog's owner.
 * Return: Doge
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Doge;

	if (name == NULL || owner == NULL)
		return (NULL);

	Doge = malloc(sizeof(dog_t));
	if (Doge == NULL)
		return (NULL);

	Doge->name = malloc((sizeof(char)) * (_strlen(name)));
	if (Doge->name == NULL)
	{
		free(Doge);
		return (NULL);
	}
	Doge->owner = malloc((sizeof(char)) * (_strlen(owner)));
	if (Doge->owner == NULL)
	{
		free(Doge->name);
		free(Doge);
		return (NULL);
	}
	Doge->name = _strcopy(Doge->name, name);
	Doge->age = age;
	Doge->owner = _strcopy(Doge->owner, owner);

	return (Doge);
}
