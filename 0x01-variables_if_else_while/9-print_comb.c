#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + (char)i);
		putchar(',');
		putchar(' ');
	}
	putchar('$');
	putchar('\n');
	return (0);
}
