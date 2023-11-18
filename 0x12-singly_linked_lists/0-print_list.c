#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints linked list
 *
 * @h: Points to struct
 *
 * @index: iterator to next node
 *
 * Return: Integer
 *
 * author:Mark shija
 */
size_t print_list(const list_t *h)
{
	unsigned int index = 0;
	const list_t *list  = NULL;

	list = h;
	while (list != NULL)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", list->len, list->str);
		list = list->next;
		index++;
	}
	return (index);
}
