
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to a struct
 * @name: name of the dof
 * @age: age of the dog
 * @owner: owner name of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
