#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - freees the memory of dog pointer
 *
 * @d: dog point pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
