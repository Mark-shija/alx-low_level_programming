#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates memory for duplicate char
 * @str: pointer to allocated memory
 * Return: A pointer to a duplicatestring
 * or, NULL
 */
char *_strdup(char *str)
{
	/* Implementation of _strdup function */

	char *dups;
	
	dups = (char *)malloc(strlen(str) +1);

	if (dups == NULL)
		return (NULL);

	strcpy(dups, str);

	return (dups);
}
