#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: function string to be printed
 *
 * return: reversed string
 */
void print_rev(char *s)
{
	int i;
	int counter;
	int j;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	for (j = counter - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
