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
	int len = 0;
	char *dup_node;

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

	dup_node = strdup(str);
	if (dup_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	new_node->str = dup_node;
	new_node->len = len;
	new_node->next = NULL;
	return (*head);
}
