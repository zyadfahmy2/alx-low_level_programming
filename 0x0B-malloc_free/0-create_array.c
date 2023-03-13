#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c:charachter to initialize the array with
 *
 * Return: pointer to array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *arr;

    arr = malloc(sizeof(char) * size);
    if (arr == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
    {
        arr[i] = c;
    }
    return (arr);
}
