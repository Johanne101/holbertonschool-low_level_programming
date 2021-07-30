#include "lists.h"
/**
 * list_len - function returns the number of elements in a linked list_t list.
 * @h: The head of linked node.
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t total_l = 0;

	while (h)
	{
		h = h->next;
		total_l++;
	}
	return (total_l);
}
