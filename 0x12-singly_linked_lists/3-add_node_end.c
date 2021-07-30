#include "lists.h"

/*
 * add_node_end - Function adds a new node at end of a list_t list.
 * @head: Beginning of nodes with elements.
 * @str: duplicate node with string copy value/elements.
 *
 * Return: Address of new element, or NULL if faild.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	return (new_node);
}
