#include "lists.h"
/**
 * add_node - Adds a new node at beginning of a list_t list
 * @head: Begining of nodes
 * @str: amount of elemts in nodes to duplicate.
 *
 * Return: Address of the element, or NULL if it faild.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *dup_str;
	int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(node);
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	node->str = dup_str;
	node->len = len;
	node->next = *head;
	*head = node;
	return (node);
}
