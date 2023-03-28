#include "main.h"
#include <stdio.h>
/**
 * print_array - print values of an array
 *@a: the array
 *@n: number of element in an array
 *Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (n >= 0)
	{
		_putchar(a[i]);
		if (i > 0 && i < n)
			printf(", ");
		i++;
	}
}
