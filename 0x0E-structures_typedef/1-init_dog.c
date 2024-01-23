#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog.
 * @d: pointer variable of struct dog
 * @name: name atribute
 * @age: Age atribute
 * @owner: owner atribute
 * Return: always nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
