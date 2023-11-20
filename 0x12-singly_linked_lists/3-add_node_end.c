#include "lists.h"

/**
* _strlen - counts the length of linked list
*
* @str: Pointer to struct pointer
*
* Return: string length
*/

int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
* add_node_end - Adds a  node to linked list
*
* @head: Double Pointer
*
* @str: Pointer to struct pointer
*
* Return: pointer of a  new element, or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *end_node;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->str = strdup(str);
	end_node->len = _strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		list = *head;

		while (list->next)
		{
			list = list->next;
		}
		list->next = end_node;
	}
	return (end_node);
}
