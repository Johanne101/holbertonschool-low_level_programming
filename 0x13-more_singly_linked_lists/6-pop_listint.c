#include "lists.h"

/**
 * pop_listint - takes a non-empty list, deletes the head node,
 * and returns the head node's data.
 * Return: 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *cp_node;

	if (*head == NULL)
	{
		return (0);
	}
	cp_node = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(cp_node);

	return (data);
}
