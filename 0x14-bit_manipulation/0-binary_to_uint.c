#include "main.h"
/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: binary number to be converted
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res, i, base;

	i = 0;
	res = 0;
	base = 1;
	if(b == NULL)
		return (0);
	while (!b[i])
	{
		if(b[i] < '0' || b[i] > '9')
			return (0);
		res += base * (b[i] - '0');
		base *= 2;
		i++;
	}
	return (res);
}
		
