#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes node at index of a linked list.
 * @head: contains data.
 * @index: position to delete.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int data;
	dlistint_t *node, *ref_node = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ref_node = (*head)->next;
		free(*head);
		*head = ref_node;
		return (1);
	}
	node = *head;
	for (data = 1; data < index; data++)
	{
		if (ref_node->next == NULL || ref_node == NULL)
			return (-1);
		ref_node = ref_node->next;
	}
	node = ref_node->next;
	ref_node->next = node->next;
	free(node);
	return (1);
}
