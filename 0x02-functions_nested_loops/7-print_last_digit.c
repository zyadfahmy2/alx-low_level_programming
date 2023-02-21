#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@n: first param
*
*Return: last digit of a number
*/
int print_last_digit(int n)
{
	int l;

	l = (n % 10);
	_putchar(l + '0');
	return (l);
}
