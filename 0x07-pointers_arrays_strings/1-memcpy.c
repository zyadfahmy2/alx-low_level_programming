#include "main.h"
/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: destiation
* @src: this is the source memory area to ccopy
* @n: number of bytes to be copied
*
*Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
