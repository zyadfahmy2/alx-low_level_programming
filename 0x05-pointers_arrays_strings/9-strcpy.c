#include "main.h"
/**
*_strcpy - function that copies the string pointed to by src
*including the terminating null byte (\0), to the buffer pointed to by dest
*@dest: destination
*@src: string to be copied
*
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return dest;
}

