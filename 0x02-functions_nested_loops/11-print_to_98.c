#include <stdio.h>
/**
*print_to_98 - print the argument till 98
*@n: start
*
*Return: void
*/
void print_to_98(int n)
{
	if ( n <=98)
	{
		for(; n < 99; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
	
		for(; n >97; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
