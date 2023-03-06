#include "main.h"
#include <stddef.h>
/**
* _strchr- locates a character in a string
* @s: string to search
* @c: character to locate
*
* Return: pointer to the first occurrence of the character c in the string s, or NULL
*/
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
