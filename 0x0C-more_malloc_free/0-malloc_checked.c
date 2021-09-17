#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: adress to allocate memory.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == 0)
		exit(98);

	return (pointer);
}
