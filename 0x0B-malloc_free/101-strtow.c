#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to evaluate
 *
 * Return: The number of words
 */
int count_words(char *str)
{
    int count = 0, in_word = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
    char **words;
    char *word;
    int i, j, k, word_len, num_words;

    if (str == NULL || *str == '\0')
        return NULL;

    num_words = count_words(str);
    if (num_words == 0)
        return NULL;

    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    i = 0;
    while (*str)
    {
        if (*str == ' ')
        {
            str++;
        }
        else
        {
            word_len = 0;
            while (str[word_len] != ' ' && str[word_len] != '\0')
                word_len++;

            word = (char *)malloc((word_len + 1) * sizeof(char));
            if (word == NULL)
            {
                for (k = 0; k < i; k++)
                    free(words[k]);
                free(words);
                return NULL;
            }

            for (j = 0; j < word_len; j++)
                word[j] = str[j];
            word[word_len] = '\0';

            words[i++] = word;
            str += word_len;
        }
    }
    words[i] = NULL;

    return words;
}
