#include "hash_tables.h"

/*
 * key_index - Returns digit index of a key
 * @key: key string
 * @size: size string of the array of hash tale.
 *
 * Return: result of where key is stored at index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result = 0;
	
	if (size == 0)
		return (0);

	result = hash_djb2(key) % size;
	
	return (result);
}
