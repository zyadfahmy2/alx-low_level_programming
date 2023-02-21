#include "main.h"
/**
*_abs - function that returns the absolute value of an integer
*@num: param1
*
*Return: absolute value
*/
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	return (num);
}

/**
*print_last_digit - prints the last digit of a number
*@n: first param
*
*Return: last digit of a number
*/
int print_last_digit(int n)
{
	return (_abs(n) % 10);
}
