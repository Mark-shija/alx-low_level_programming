#include "main.h"

/**
 * int _isalpha(int c) - checks for characters
 *
 * Return: Always 1.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
