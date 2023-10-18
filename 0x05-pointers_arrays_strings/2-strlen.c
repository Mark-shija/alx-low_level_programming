#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: is string to be evaluated
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
