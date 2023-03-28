#include "main.h"

/**
 * print_triangle - pring traingle
 * @size: size of a triange
 * Return: 0 always
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = size - j; i > 0; i--)
	{
		_putchar(' ');
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
