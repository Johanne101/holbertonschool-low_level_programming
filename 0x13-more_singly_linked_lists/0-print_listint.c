#include "lists.h"

/**
 * print_listint - Prints all elements of a linked_t lists.
 * @h: pointed string containing elements.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
