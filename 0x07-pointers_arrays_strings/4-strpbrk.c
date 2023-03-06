#include "main.h"
#include <stdio.h>
/**
* _strspn - gets the length of a prefix substring
* @s:first param
* @accept: second param
*
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
