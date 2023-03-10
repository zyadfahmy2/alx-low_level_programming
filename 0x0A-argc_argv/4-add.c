#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: number of arguments + name of the program
* @argv: array of strings contains arguments + name
*
* Return: addition of the arguments
*/
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '0')
			continue;
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
