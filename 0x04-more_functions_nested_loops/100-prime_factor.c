nclude <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = 0;
/*This takes care of all the even factors.1*/
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
/*incrementing i by 2 each time (skipping even numbers)*/
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
/*If n is greater than 2, it means that it is still divisible by a prime number greater than the square root of the original n. In that case, set max to n.*/
	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
