#include "main.h"
/**
* is_prime_rec - function to be called to get primality
*@n: number to be checked
*@i: helper variable
*
*Return: 1 if prime otherwise 0
*/
int is_prime_rec(int n, int i)
{
	if (i >= n / 2)
		return (0);
	if (n % i == 0)
		return (1);
	return (is_prime_rec(n, i + 1));
}
/**
* is_prime_number - check if the number is prime
* @n: number to be checked
*
*Return: 1 if prime otherwise 0
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0)
	return (is_prime_rec(n, 2));
}
