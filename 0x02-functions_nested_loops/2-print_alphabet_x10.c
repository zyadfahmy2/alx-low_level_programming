#include "main.h"
/**
* print_alphabet - print the small letters of the alphabet
*
*Return: void
*/
void print_alphabet(void)
{
	int i;
	char alphabet;

	alphabet = 'a';
	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet++);
	}
}

/**
* print_alphabet_x10 - print the small letters of the alphabet 10 times
*
*Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	_putchar('\n');
}
/**
*main - Entry point
*
*Return: Always 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
