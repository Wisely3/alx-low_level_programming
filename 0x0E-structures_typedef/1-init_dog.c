#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  function that initialize a variable
 *		of type struct dog
 * @d: the pointer for initializing
 * @name: the name to be initialized
 * @age: the age to be oinitialized
 * @owner: the owner to be initialized
 *
 * Description: fully provided
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
