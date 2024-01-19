#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * malloc_checked - allocates memory using malloc, exit(98) when itfails.
 * @b:Function parameter
 * Return: Always allocated memory address.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
