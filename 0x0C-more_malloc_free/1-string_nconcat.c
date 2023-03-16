#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int len1 = 0, len2 = 0, i, j;

    if (s1 != NULL)
    {
        for (len1 = 0; s1[len1] != '\0'; len1++)
            ;
    }
    if (s2 != NULL)
    {
        for (len2 = 0; s2[len2] != '\0'; len2++)
            ;
    }

    if (n >= len2)
    {
        n = len2;
    }

    result = malloc((len1 + n + 1) * sizeof(char));
    if (result == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < len1; i++)
    {
        result[i] = s1[i];
    }
    for (j = 0; j < n; j++, i++)
    {
        result[i] = s2[j];
    }

    result[i] = '\0';
    return (result);
}
