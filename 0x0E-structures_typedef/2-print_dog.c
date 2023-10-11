#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the details of a dog.
 * @d: pointer to the dog structure.
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	(!d->name) && (d->name = "(nil)");
	(!d->owner) && (d->owner = "(nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
