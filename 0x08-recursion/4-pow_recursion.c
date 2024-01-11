#include "main.h"

/**
 * _pow_recursion - return the power of x raised by y.
 * @x: Number to raise.
 * @y: raising factor or power.
 * Return: always reult of power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
