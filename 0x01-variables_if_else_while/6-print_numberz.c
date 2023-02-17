#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	alphabet = '0';
	while (alphabet <= '9')
	{
		putchar(alphabet++);
	}
	putchar('\n');
	return (0);
}
