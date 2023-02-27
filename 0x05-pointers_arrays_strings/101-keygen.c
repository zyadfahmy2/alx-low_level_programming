#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int s;

	srand(time(0));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
