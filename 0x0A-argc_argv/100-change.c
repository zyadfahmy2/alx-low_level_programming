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
	int val, count, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	count = 0;
	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (val >= coins[i])
		{
			count++;
			val -= coins[i];
		}
	}
	printf("%d\n", count);
	return (0);
}
