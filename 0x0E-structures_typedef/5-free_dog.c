#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  a function that frees dogs
 * @d: a pointer that frees the dogs
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
