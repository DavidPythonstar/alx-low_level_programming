#include "main.h"

/**
 * swap_int - swaps int in given variables
 * @a: variabke 1
 * @b: variable 2
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;


}
