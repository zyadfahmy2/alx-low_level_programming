#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned int temp;

	temp = n;
	if (n == 0)
		printf("0");
	while (n)
	{
		n >>= 1;
		if (n * 2 != temp)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		temp >>= 1;
	}
	printf("\n");
}
