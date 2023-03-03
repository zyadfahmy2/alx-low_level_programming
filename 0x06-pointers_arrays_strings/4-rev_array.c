#include "main.h"
/**
*reverse_array -  function that reverses the content of an array of integers.\
*@a: array to be reveresed
*@n: length of the array
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	n--;
	while ( i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
