#include "main.h"

/**
 * int _islower() - finds lower case a-z.
 *
 * return: Always 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
