#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * malloc_checked - Allocates memory using malloc f(x)
 * Function exit with 98 error
 * @b:Function parameter
 * Return: Always allocated memory address.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return(ptr);
}
