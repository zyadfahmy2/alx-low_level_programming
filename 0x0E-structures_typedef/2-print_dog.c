#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog function that prints struct dog
 * @d: struct of type dog
 */
void print_dog(struct dog *d)
{
	if(d == NULL)
	{
		printf("nil\n");
	}
	else
	{
		if (d->name == NULL)
			d->name = "nil";
		if (d->owner == NULL)
			d->owner = "nil";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
