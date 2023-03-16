#include "main.h"
#include <stdlib.h>
/**
 * _calloc - same as calloc in stdlib
 * @nmemb: number of the size specified
 * @size: the actual size in terms of bytes
 *
 * Return: pointer to allocated memory
 * or NULL in case size = 0 or mallo fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	if (size == 0 || nmemb == 0)
		return (NULL);
		
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	size = 0;
	for (; size < nmemb; size++)
		*(ptr + size) = 0;
	return (ptr);
}
