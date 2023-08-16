#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates through the given fn pointer
 * @array: array
 * @size:size of the array
 * @action: action to be done to the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
