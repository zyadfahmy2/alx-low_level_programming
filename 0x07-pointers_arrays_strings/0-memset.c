#include <iostream>
/**
* _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
* @s: pointer to character to be passed (we could pass an array of integer here
* @b: the value to where the bytes of s will be set
* @n: the number of bytes to be set
*
* Return: Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
