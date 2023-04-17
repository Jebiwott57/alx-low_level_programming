#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes
 * a variable of type struct dog.
 * @d: pointer to function init_dog.
 * @name: name to dog.
 * @age: age of dog.
 * @owner: pointer to owners identity.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
