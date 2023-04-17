#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees all th memory of dog struct
 * @d: dog struct
 * Return: Void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
}
