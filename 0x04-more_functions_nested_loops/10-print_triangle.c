#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				_putchar(' ');
			}
			for (; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
