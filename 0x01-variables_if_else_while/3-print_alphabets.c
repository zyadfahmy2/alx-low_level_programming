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
                putchar(alphabet++);
        }
        alphabet = 'A';
        while (alphabet <= 'Z')
        {
                putchar(alphabet++);
        }
        putchar('\n');
        return (0);
}

