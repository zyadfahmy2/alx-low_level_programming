#include "main.h"
/**
*_abs - function that returns the absolute value of an integer
*@num: param1
*
*Return: absolute value
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10;

	if (x < 0)
		x = -x;

	_putchar(x + '0');

	return (x);
}
