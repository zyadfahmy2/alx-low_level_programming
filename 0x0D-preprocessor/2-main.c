#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * program that prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * RETURN: always EXIT_SUCCESS
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
