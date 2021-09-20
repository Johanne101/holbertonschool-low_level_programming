#include "lists.h"

/**
 * free_listint - Function frees a linked list.
 * @head: Pointer to the head node of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node = head;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head);
		head = tmp_node;
	}
}
