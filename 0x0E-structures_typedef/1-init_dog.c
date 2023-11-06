#include "dog.h"

/**
 * int_dog - initializes the dog's details
 * @*d: pointer to the struct
 * @*name: dog's name
 * @age: dog's age
 * @*owner: dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
