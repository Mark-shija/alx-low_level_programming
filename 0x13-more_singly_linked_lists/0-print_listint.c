#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_listint(const listint_t *h)
{
	/* Implementation of print_list,h */

	/* Initialize variable that counts nodes */

	size_t node_count = 0;

	while (h)
	{
			printf("%d\n", h->n);

		node_count++;
		h = h->next;
	}

	return (node_count);
}
