#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free a dog structure
  * @d: structure pointer to dog_t
  *
  * Return: Always NULL
  */
void free_dog(dog_t *d)
{
	/* Implementation of free_dog function */

	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
