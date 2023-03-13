#include "main.h"
/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c:charachter to initialize the array with
 *
 * Return: pointer to array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
  int i;
  char *arr;

  arr = malloc(sizeof(char) * size);
  for (i = 0; i < size; i++)
  {
    arr[i] = c;
  }
  return (arr);
}
