#include "main.h"
#include <stdio.h>

/**
 * factorial - prints factorial of n.
 * @n: function parameter
 * Return: Always integer.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

	return (0);
}
