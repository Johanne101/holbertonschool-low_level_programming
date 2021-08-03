#include "lists.h"

/**
 * free_listint2 - Function frees a linked list.
 * @head: Pointer to the head node of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node, *cp_node = *head;

	while (head == NULL && cp_node != NULL)
	{
		return;
		tmp_node = cp_node->next;
		free(cp_node);
		cp_node = tmp_node;
	}
	*head = NULL;
}
