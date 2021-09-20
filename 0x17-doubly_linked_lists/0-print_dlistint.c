#include "lists.h"

/**
 * print_dlistint - Prints all elements of a linked_t lists.
 * @h: pointed string containing elements.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
