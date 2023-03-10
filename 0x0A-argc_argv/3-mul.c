#include <stdio.h>
/**
* main - Entry point
* @argc: number of arguments + name of the program
* @argv: array of strings contains arguments + name
*
* Return: 0 Always
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", (argv[1][0] - '0') * (argv[2][0] - '0'));
	return (0);
}
