#include "main.h"

/**
* reverse_array - reverses an array of integers
* @a: array to be reversed
* @n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	n--;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
