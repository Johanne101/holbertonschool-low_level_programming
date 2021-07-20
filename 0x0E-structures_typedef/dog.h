#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - Defined structured information of dog.
 * @name: charater element - pointed variable type.
 * @age: float element - dog age
 * @owner: character element - pointed variable 2 type.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


#include <stddef.h>
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
