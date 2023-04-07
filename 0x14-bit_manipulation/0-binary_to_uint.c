#include "main.h"
/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: binary number to be converted
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res, base, length;

	res = 0;
	base = 1;
	length = 0;
	if(b == NULL)
		return (0);
	while(!b[i])
	{
		length++;
	}
	length--;
	while (length > -1)
	{
		if(b[length] < '0' || b[length] > '9')
			return (0);
		res += base * (b[length] - '0');
		base *= 2;
		length--;
	}
	return (res);
}
		
