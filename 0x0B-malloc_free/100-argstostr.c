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
	int i, totalLength, j, size;
	char **newString;

	totalLength = 0;
	if (ac == 0)
		return (NULL);
	newString = malloc(sizeof(char *) * ac - 1);
	if (newString == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		size = 0;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		newString[i - 1] = malloc(sizeof(char) * size + 1);
		if (newString[i - 1] ==NULL)
		{
			while (i > 1)
			{
				free(newString[i - 1];
			}
			free(newString);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newString[i - 1][j] = av[i][j];
		}
	}
	
}
