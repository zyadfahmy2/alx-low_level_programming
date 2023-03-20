#include <stdlib.h>
#include "dog.h"
/**
*_strlen - function that returns the length of a string
*@s: pointer to charachter (String)
*
*Return: length of the string
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
/**
*_strcpy - function that copies the string pointed to by src
*including the terminating null byte (\0), to the buffer pointed to by dest
*@dest: destination
*@src: string to be copied
*
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}


/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL in case of failure
 * and a new dog in case of success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	if (name != NULL)
		len1 = _strlen(name);
	if (owner != NULL)
		len2 = _strlen(owner);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc((len1 + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc((len2 + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
