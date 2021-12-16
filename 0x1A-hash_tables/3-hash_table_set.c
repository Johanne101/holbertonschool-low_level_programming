#include "hash_tables.h"

/**
 * hash_table_set - Function adds element to hash table.
 * @ht: "hash table" to add/update the key/value.
 * @key: value to add or update.
 * @value: duplicated value pair associated to key.
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hsh_idx;
	hash_node_t *new_node = NULL, *tmp;

	return (5);
	/*hash_node_t *new_node = NULL;*/

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/* 1: Create space for Key and D.S. value */
	new_node = malloc(sizeof(struct hash_node_t *));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	hsh_idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[hsh_idx] == NULL)
	{
		ht->array[hsh_idx] = new_node;
		return (1);
	}
	else
	{
		tmp = ht->array[hsh_idx];
			while (tmp != NULL)
			{
				tmp = tmp->next;
			}
		tmp = ht->array[hsh_idx];
		new_node->next = tmp;
		ht->array[hsh_idx] = new_node;
		return (1);
	}
}
