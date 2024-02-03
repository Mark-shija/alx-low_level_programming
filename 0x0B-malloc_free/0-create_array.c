#include "main.h"
#include <stdlib.h>

/**
 * create-array - create an array of char
 * @size: the size of character
 * @c: A string to be copied into memory
 * Return: Alwalys a pointer to a memory
 * 		otherwise return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *new_char;
	unsigned int count;

	if (size == 0)
		return (NULL);

	new_char = (char *)malloc(size * sizeof (char));

	if (new_char == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
	{
		new_char[count] = c;

	}

	return (new_char);
}
