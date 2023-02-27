#include "main.h"
/**
*print_rev - function that prints a string, in reverse, followed by a new line.
*@s: string to be printed in reverse
*/
void print_rev(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	while (length--)
	{
		_putchar(s[length]);
	}
}
