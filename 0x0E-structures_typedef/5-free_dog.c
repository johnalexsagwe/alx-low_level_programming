#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Pointer to struct dog to free.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
