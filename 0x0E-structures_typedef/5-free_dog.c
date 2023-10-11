#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog structure from memory.
 * @d: Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
