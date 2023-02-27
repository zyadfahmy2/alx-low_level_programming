#include "main.h"
/**
*puts_half - function that prints half of a string, followed by a new line.
*@str: string to be printed
*/
void puts_half(char *str)
{
	int length, i, n;

	length = 0;
	while (str[length] != '\0')
		length++;
	n = (length - 1) / 2;
/* ahmed */
	if (n & 1)
	{
		for (i = length - n +1; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
