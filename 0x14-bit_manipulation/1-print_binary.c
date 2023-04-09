#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;
	while (shifts >= 0)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
		shifts--;
	}
}
