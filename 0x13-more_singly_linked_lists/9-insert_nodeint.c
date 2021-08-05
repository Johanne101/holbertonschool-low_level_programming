#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts node at a given position.
 * @head: head node with data.
 * @idx: "position" of new node, starting at 0.
 * @n: "data" integer value of node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *headNode = *head;
	unsigned int position = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = headNode;
		*head = new_node;
		return (new_node);
	}
	for ( ; position < (idx - 1); position++)
	{
		if (headNode == NULL || headNode->next == NULL)
			return (NULL);
		headNode = headNode->next;
	}
	new_node->next = headNode->next;
	headNode->next = new_node;
	return (new_node);
}
