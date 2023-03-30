#include "main.h"

/**
 * reverse_array - prints a revsed array
 * @a: the array variable
 * @n: number of aitems an array
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int i;
	int last;

	for (i = 0; i < n--; i++)
	{
		last = a[i];
		a[i] = a[n];
		a[n] = last;
	}
}
