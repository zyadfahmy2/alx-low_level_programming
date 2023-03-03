#include "main.h"
/**
*_strcat - function that concatenates two strings.
*This function appends the src string to the dest string
*overwriting the terminating null byte (\0) at the end of dest
*and then adds a terminating null byte
*@dest: result parameter
*@src: string to be appended
*
*Return: the appended string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	wi++;
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = src[j];
	return (dest);
}
