#include "main.h"
#include <stdlib.h>
/**
 * strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
    int length, i;
    char *c;

    length =0;
    i = 0;
    if (str[length] != '\0')
        length++;
    if (length == 0)
        return (NULL);
    c = malloc(sizeof(char) * length +1);
    while (str[i] != '\0)
    {
        c[i] = str[i];
        i++;
    }
    c[i] = '\0';
    return (c)
}
