#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints string length
 * @s: function parameter
 * Return: Always string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
