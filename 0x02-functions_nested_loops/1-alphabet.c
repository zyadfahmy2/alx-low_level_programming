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
	_putchar('\n');
}
