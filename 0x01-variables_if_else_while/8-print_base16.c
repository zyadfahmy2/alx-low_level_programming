#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;
	int i;

	alphabet = 'a';
        for (i = 0; i < 10; i++)
        {
                putchar('0' + (char)i);
        }
	while (alphabet <= 'z')
	{
		putchar(alphabet++);
	}
	putchar('\n');
	return (0);
}
