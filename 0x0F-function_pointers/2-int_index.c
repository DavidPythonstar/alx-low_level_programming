#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches an interger
 * @array: to searched
 * @size: of the array
 * @cmp: function pointer
 * Return: Int of the search
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
