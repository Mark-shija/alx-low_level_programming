#include "lists.h"

/**
 * get_nodeint_at_index - gives the Nth node of a list
 *
 * @head: pointer to head node
 *
 * @index: int
 *
 * Return:last node  listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int k)
{

	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (head != NULL)
	{
		if (k == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
