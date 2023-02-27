#include "main.h"
/**
*_atoi -  function that convert a string to an integer.
*@s: string to be converted
*
*Return: If there are no numbers in the string, the function must return 0
*/
int _atoi(char *s)
{
	int i, res;

	i = 0;
	res = 0;
	if (s[i] == '-')
	{
		for (i = 1; s[i] != '\0'; i++)
		{
			res = res * 10 - (s[i] - '0');
		}
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			res = res * 10 + (s[i] - '0');
		}
	}
	return (res);

