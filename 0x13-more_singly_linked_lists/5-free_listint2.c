#include "lists.h"

/**
 * free_listint2 - Function frees a linked list.
 * @head: Pointer to the head node of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	while (*head != NULL)
	{
		tmp_node = (*head)->next;
		free(*head);
		*head = tmp_node;
	}
	*head = NULL;
}
