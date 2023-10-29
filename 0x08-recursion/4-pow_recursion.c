#include "main.h"

/**
 * _pow_recursion - prints the power of a given num
 * @x: parameter 1
 * @y: parameter 2.
 * Return: answer of x power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}
