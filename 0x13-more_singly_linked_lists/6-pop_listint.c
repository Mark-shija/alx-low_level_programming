#include "lists.h"

/**
 * pop_listint - Remove node of a linked list
 *
 *@head: pointer to head node
 *
 * @n: linked list value to be returned
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int m = 0;
	listint_t *first_node = *head;

	if (first_node)
	{
		m = first_node->n;
		*head = first_node->next;
	}
		free(first_node);
		return (m);
}
