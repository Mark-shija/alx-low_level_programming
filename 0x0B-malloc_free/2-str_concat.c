#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Always a pointer to allocated memory
 * or, Null when fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concated;
	int len1, len2, len_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	len_concat = len1 + len2;

	concated = (char *)malloc(len_concat * sizeof(char) + 1);

	if (concated == NULL)
		return (NULL);

	strcpy(concated, s1);

	strcat(concated, s2);

	return (concated);
}
