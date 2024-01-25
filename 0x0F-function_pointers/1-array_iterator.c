#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*
 * array_iterator - iterate through an array
 * @array: array taken as function argument.
 * @size:size of an array also argument
 * @action:function pointer that return void
 * Return: Always is null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
