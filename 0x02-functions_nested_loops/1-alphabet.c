#include <unistd.h>
/**
*_putchar - prints character to the output stream
*@c: character to be printed
*
*Return: 0 (success) -1 (fail)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

}
/**
* print_alphabet - print the small letters of the alphabet
*
*Return: void
*/
void print_alphabet(void)
{
	int i;
	char alphabet;

	alphabet = 'A';
	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet++);
	}
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
