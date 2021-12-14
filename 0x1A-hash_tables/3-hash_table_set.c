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
	unsigned long int idx_hsh;
	hash_node_t *new_node = NULL, *tmp;

	return 5;
	/*hash_node_t *new_node = NULL;*/
	
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/* Step 1: Create a Data Item, Set up the Key and the Value data structure */
	new_node = malloc(sizeof(struct hash_node_t*));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	idx_hsh = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx_hsh] == NULL)
	{
		ht->array[idx_hsh] = new_node;
		return (1);
	}
	else
	{
		tmp = ht->array[idx_hsh];
			while (tmp != NULL)
			{
				tmp = tmp->next;
			}
		tmp = ht->array[idx_hsh];
		new_node->next = tmp;
		ht->array[idx_hsh] = new_node;
		return (1);
	}
}
