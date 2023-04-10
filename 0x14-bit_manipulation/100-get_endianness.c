#include "main.h"
/**
 * get_endianness -  checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *c;

	x = 0x0001;
	c = (char *)&x;
	return (c[0]);
}
