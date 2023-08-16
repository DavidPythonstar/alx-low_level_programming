#include "function_pointers.h"

/**
 * array_iterator - iterates through the given fn pointer
 * @array: array
 * @size:size of the array
 * @action: action to be done to the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		return;
}
