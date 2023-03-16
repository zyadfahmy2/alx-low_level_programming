#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size to be allocated
 * if the malloc fails it should cause normal process termination
 * with status 98
 *
 * Return: pointer to the allocated memory
 * */
void *malloc_checked(unsigned int b)
{
	void * ptr;

	ptr = malloc(b);
	if (ptr ==NULL)
		exit(98);
	return (ptr);
}
