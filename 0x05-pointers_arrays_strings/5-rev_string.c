#include "main.h"
/**
*rev_string - function that reverses a string
*@s: string to be reversed
*/
void rev_string(char *s)
{
/* ahmed - > demha   , omar -> ramo*/
	int length, i;
	char tmp;

	length = 0;
	i = 0;
	while (s[length] != '\0')
		length++;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;
	}
}
