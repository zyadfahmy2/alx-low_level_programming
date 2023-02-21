#include "main.h"
/**
*jack_bauer - print times of the day hours and minutes
*
*Return: void
*/
void jack_bauer(void)
{
	char hours;
	char minutes;

	hours = 0;
	minutes = 0;
	while (hours != 24)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		minutes++;
		if (minutes == 60)
		{
			minutes = 0;
			hours++;
		}
	}
}
