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
	char sign, number;

	i = 0;
	res = 0;
	number = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
			sign = s[i];
		else if (s[i] >= '0' && s[i] <= '9')
		{
			number = 1;
			break;
		}
		i++;
	}
	if (!number)
		return (0);
	if (sign == '-')
	{
		for (; s[i] >= '0' && s[i] <= '9'; i++)
		{
			res = res * 10 - (s[i] - '0');
		}
	}
	else
	{
		for (; s[i] >= '0' && s[i] <= '9'; i++)
		{
			res = res * 10 + (s[i] - '0');
		}
	}
	return (res);
}
