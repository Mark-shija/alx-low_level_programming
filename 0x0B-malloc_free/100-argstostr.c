#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: Pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    int i, j, k = 0;
    int length = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        length += strlen(av[i]) + 1;
    }

    str = (char *)malloc(sizeof(char) * (length + 1));
    if (str == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[k++] = av[i][j];
        }
        str[k++] = '\n';
    }

    str[k] = '\0';

    return str;
}
