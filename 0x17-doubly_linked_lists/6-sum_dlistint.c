#include "lists.h"

/**
 * sum_listint - Function that sums all the data (n) of the linked list.
 * @head: Head node where the data is contained.
 * Return: The sum of the data, or 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
