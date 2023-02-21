#include "main.h"
/**
*times_table - print time table
*
*Return: void
*/
void times_table(void)
{
	int i;
	int j;
	char x;

	for (i = 0; i < 10; i++)
	{
		x = 0;
		for (j = 0; j < 10; j++)
		{
			_putchar(x);
			x = '0' + (char)i;
			_putchar(',');
			_putchar('.');
			_putchar('.');
		}
		_putchar('\n');
	}
}
