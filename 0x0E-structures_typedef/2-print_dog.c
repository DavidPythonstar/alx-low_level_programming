#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the attributes of dog
 * @d: the dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("%s", (d->name) ? d->name : "nil");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
