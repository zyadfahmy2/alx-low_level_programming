#include "main.h"
/**
* factorial - function that returns the factorial of number
*@n: number to calculate its factorial
*
*Return: return the result of factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
