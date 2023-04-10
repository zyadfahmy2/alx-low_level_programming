#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * this function asssumes that the integar size is 32 bit
 * @n: pointer to the number to be changed
 * @index: from right to left
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= (1 << index) | *n;
	return 1;
}
