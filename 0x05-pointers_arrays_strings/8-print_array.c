#include "main.h"
#include <stdio.h>
/**
*print_array -  function that prints n elements of an array of integers
*@a: array to be printed
*@n: size of the array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
