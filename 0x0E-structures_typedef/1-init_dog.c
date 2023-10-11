#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
