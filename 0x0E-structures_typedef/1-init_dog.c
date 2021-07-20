#include "dog.h"

/**
 * init_dog - Initiate dog structure element, with its proper values.
 * @d: structure of a dog.
 * @name: dog name
 * @age: age of dog
 * @owner: name of dog owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
