#include "main.h"

/**
 * _strncpy - copy string
 *
 * @s: string to be copied
 *
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];

		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';

		j++;
	}

	return (dest);
}
