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
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
