#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if ((alphabet != 'q' && alphabet != 'e'))
		{
			putchar(alphabet++);
		}
	}
	putchar('\n');
	return (0);
}
