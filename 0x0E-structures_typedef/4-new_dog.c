#include <stdlib.h>
#include "dog.h"
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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
