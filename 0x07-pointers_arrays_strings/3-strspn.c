#include "main.h"
/**
* _strspn
* @s:first param
* @accept: second param
*
* Return: the number of bytes in the initial segment of s 
* which consist only of bytes from accept
*/
int _strspn(char *s, char *accept)
{
	int i, j, count, flag;

	count = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}
		if (!flag)
			return count;
	}
}
