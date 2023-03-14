#include "main.h"
#include <stdlib.h>
/**
 * argstostr - oncatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of strings to be concatenated
 *
 * Return: pointer to a new string of null if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, x;
	char *newString;

	x = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	size++;
	newString = malloc(sizeof(char) * size);
	if (newString == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newString[x] = av[i][j];
			x++;
		}
		newString[x] = '\n';
		x++;
	}
	newString[x] = '\0';
	return (newString);
}
