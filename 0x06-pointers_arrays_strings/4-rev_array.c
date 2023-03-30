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

	for (i = 0; i >= 0; i--)
	{
		_putchar(a[i] + '0');
		if (i > 0 && i < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
