#include "lists.h"

/**
 * add_dnodeint - Function adds a new node at the beginning of a linked list.
 * @head: contains string elements.
 * @n: number of elements.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (node);
}
