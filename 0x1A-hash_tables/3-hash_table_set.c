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
	struct hash_node_s *new_node;
	new_node->key = *key;
	new_node->value = *value;
	/*hash_node_t *helper_node = NULL;*/
	
	if (ht == NULL || key == NULL)
		return (0);
	/* Step 1: Create a Data Item, Set up the Key and the Value data structure */
	new_node = (struct hash_node_s*)malloc(sizeof(struct hash_node_s));

	return (0);
}
