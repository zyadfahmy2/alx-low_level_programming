#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: number of arguments + name of the program
* @argv: array of strings contains arguments + name
*
* Return: 0 Always
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int val, count;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	count = 0;
	val = atoi(argv[1]);
	while (val != 0)
	{
		if (val >= 25)
		{
			val -= 25;
			count++;
		}
		else if (val >= 10)
		{
			val -= 10;
			count++;
		}
		else if (val >= 5)
		{
			val -= 5;
			count++;
		}
		else if (val >= 2)
		{
			val -= 2;
			count++;
		}  
		else if (val >= 1)
		{
			val -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
