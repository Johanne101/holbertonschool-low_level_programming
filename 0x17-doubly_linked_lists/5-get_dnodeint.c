#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns nth node of a linked list.
 * @head: head node with data to be retreived.
 * @index: Is index node, starting at 0.
 * Return: Node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *catchnode = head;
	unsigned int key = 0;

	if (head == NULL)
		return (0);

	while (catchnode != NULL)
	{
		if (key == index)
			return (catchnode);
		key++;
		catchnode = catchnode->next;
	}
	return (NULL);
}
