#include "main.h"

/**
 * string_toupper - change string to upper
 * @s: parameter as input 
 *
 * Return: String in uppercase
 */
char *string_toupper(char *)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

		i++;
	}

	return (s);
}
