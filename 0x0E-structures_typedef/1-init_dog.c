#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initilise dog struct with the following
 * @d : the dog to be be initilised
 * @name: name of the dog
 * @age:age
 * @owner: owner of the dog
 * Return: void
 */
 
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}

