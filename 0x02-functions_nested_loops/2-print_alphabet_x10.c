#include "main.h"

/**
 * print_alphabet_x10 - prints a to z
 * prints x10
 * followed by new line
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	int letter;
	while (counter <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar (letter);
		}

		counter++;

		_putchar ('\n');
	}
}
