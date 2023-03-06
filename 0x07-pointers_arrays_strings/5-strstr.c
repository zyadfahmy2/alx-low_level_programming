#include "main.h"
#include <stdio.h>
/**
* *_strstr - function that locates a substring
* @haystack: main string to be compared
* @needle: string to be scanned and compare it with orig
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, count;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (hatstack[i] != needle[j]
				break;
			count++;
		}
		if (count == j)
			return (hatstack + i);
	}
