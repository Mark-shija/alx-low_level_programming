#include "main.h"

/**
 * print_alphabet - prints lower case letters
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}

	_putchar ('\n');

}

