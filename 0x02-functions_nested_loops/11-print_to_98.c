#include "main.h"

/**
 * print_to_98 - prints natural number from n to 98
 * @n: inpit for the function
 * Return: mone
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
