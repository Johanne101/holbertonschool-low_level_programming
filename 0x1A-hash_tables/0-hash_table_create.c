#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: the size of the array.
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t;
	unsigned long int check;
	/* Condition */
	if (size == 0)
		return (NULL);
	/* memory allocation to obtain members */
	new_hash_t = malloc(sizeof(hash_table_t));
	if (new_hash_t == NULL)
		return (NULL);

	/* Location */
	new_hash_t->size = size;
	new_hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_t->array == NULL)
		return (NULL);

	for (check = 0; check < size; check++)
	{
		new_hash_t->array[check] = NULL;
	}
	return (new_hash_t);
}
