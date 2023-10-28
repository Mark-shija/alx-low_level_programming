#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print string in rev
 * @s: function input variable.
 * Return: A string in reverse order
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);

	putchar(*s);
}

