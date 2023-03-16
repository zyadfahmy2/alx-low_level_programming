#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocate dynamically an array
 * the array contain values from min to max all included
 * @min: the start value of the array
 * @max: the end value of the array
 *
 * Return: pointer to the array
 * or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (!arr)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
