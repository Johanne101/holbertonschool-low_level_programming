#include "lists.h"

/**
 * print_list - Print all elements of a structure "list_t" list.
 * @h: head of nodes with lists of list_t.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	int num = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%i] %s\n", tmp->len, tmp->str);
		num++;
		tmp = tmp->next;
	}
	return (num);
}
