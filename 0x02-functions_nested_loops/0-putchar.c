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
*main - Entry point
*
*Return: Always 0
*/
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('_');
	return (0);
}
