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

/**
 * insert_dnodeint_at_index - Function that inserts node at a given position.
 * @head: head node with data.
 * @idx: "position" of new node, starting at 0.
 * @n: "data" integer value of node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp_head;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	tmp_head = *h;

	if (idx == 0)
	{
		return (add_dnodeint(&tmp_head, n));
		 /*new_node->next = tmp_head;
		 new_node->prev = NULL;
		 *h = new_node;
		 return (new_node);*/
	}

	if (idx > dlistint_len(*h))
	{
		return (NULL);
	}

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	for ( ; index != idx; index++)
	{
		tmp_head = tmp_head->next;
		if (tmp_head == NULL || tmp_head->next == NULL)
		{
			free (new_node);
			return (NULL);
		}
	}
	tmp_head->prev->next = new_node;
	new_node->prev = tmp_head->prev;
	new_node->next = tmp_head;
	tmp_head->prev = new_node;
	return (new_node);
}
