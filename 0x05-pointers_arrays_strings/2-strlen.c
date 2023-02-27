#include "main.h"
/**
*_strlen - function that returns the length of a string
*@s: pointer to charachter (String)
*
*Return: length of the string
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

