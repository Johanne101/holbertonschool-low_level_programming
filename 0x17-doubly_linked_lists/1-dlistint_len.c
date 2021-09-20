#include "lists.h"

/**
 * dlistint_len - Function returns numbers of elements in a linked list.
 * @h: Pointers with string elements.
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t total_l = 0;

	while (h)
	{
		h = h->next;
		total_l++;
	}
	return (total_l);
}
