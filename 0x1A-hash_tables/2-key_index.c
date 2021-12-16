#include "hash_tables.h"
/**
 * key_index - Function returns the index of a key.
 * @key: key index to retrive.
 * @size: size of the array of the hash table.
 *
 * Return: index where key/value pair
 * is stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result = 0;

	if (size == 0)
		return (0);
	/* wrap around the table */
	result = hash_djb2(key) % size;

	return (result);
}
