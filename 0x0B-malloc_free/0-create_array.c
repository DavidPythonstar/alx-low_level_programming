#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an arry char
 *
 * @size:  size of array
 * @c: char
 * Return: array of char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int unsigned i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
