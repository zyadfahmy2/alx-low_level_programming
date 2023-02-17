#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet--);
	}
	putchar('\n');
	return (0);
}
