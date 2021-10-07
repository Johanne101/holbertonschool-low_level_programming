#include "hash_tables.h"

/*
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * key.
 * @key: value to be updated.
 * value: is the value associated with the key to be duplicated.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *helper_node = NULL;
	
	if (ht == NULL || key == NULL)
		return (0);


}
