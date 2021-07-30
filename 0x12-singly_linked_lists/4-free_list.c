#include "lists.h"

/**
 * free_list - Function frees a list_t list.
 * @head: Pointer to free.
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
