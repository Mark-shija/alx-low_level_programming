#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds nodes to a beginning of a string
 * @head: pointer to a first node of a list_t
 * @str: string to be added to alist_t
 * Return: always a new node added
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *new_node;
	char  *duplicate;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}
	new_node->str = duplicate;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
